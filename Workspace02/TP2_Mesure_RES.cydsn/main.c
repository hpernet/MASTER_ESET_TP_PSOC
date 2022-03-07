/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
// Includes
#include <project.h>
#include <stdio.h>

// DEFINE 
#define REFERENCE_RESISTENCE 110
#define RESISTANCE_VALUE_MAX 60000
#define PWM_MAX              255

// TYPEDEF
typedef struct 
{
    int16_t POH;
    int16_t POF;
    int16_t POM; 
} mux_potentiel_t;

// Variable declaration
mux_potentiel_t mux_pot; 
int   val = 0;
char  valeur[8] = {0};
float resistance_value;

// MAIN
int main()
{
    //-----------------------//
    //   START ALL MODULES   //
    //-----------------------//
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    USBUART_1_Start(0, USBUART_1_5V_OPERATION);
    while(0 == USBUART_1_GetConfiguration())
    {
    }
    USBUART_1_CDC_Init();

    
    AMux_1_Start();

    ADC_DelSig_1_Start();
    
    PWM_1_Start();
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    //-----------------------//
    //     INIFINIT LOOP     //
    //-----------------------//
    for(;;)
    {
        // Get all potentials values
        AMux_1_Select(0);
        mux_pot.POH = ADC_DelSig_1_CountsTo_mVolts(ADC_DelSig_1_Read32());
        
        AMux_1_Select(1);
        mux_pot.POM = ADC_DelSig_1_CountsTo_mVolts(ADC_DelSig_1_Read32());

        AMux_1_Select(2);
        mux_pot.POF = ADC_DelSig_1_CountsTo_mVolts(ADC_DelSig_1_Read32());
        
        // Compute resistance value
        resistance_value =  (float) (mux_pot.POM - mux_pot.POF) / (mux_pot.POH - mux_pot.POM);
        resistance_value *= REFERENCE_RESISTENCE;
        
        // Set PWM Value
        PWM_1_WriteCompare(resistance_value * PWM_MAX / RESISTANCE_VALUE_MAX);
        
        //Send Value to UART
        sprintf(valeur, "%.3f", resistance_value);
        USBUART_1_PutString(valeur);
        CyDelay(5);
        USBUART_1_PutCRLF();
        
        // Task delay
        CyDelay(300);
    }
}

/* [] END OF FILE */
