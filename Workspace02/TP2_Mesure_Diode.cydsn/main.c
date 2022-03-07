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
#define REFERENCE_RESISTENCE 505
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

float diode_tension;
float diode_curant;

uint8_t courant_consigne;

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

    IDAC8_1_Start();
    
    AMux_1_Start();

    ADC_DelSig_1_Start();
        
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    //-----------------------//
    //     INIFINIT LOOP     //
    //-----------------------//
    for(;;)
    {
        //IDAC8_1_SetValue(1);

        // Get all potentials values
        AMux_1_Select(0);
        mux_pot.POH = ADC_DelSig_1_CountsTo_mVolts(ADC_DelSig_1_Read32());
        
        AMux_1_Select(1);
        mux_pot.POM = ADC_DelSig_1_CountsTo_mVolts(ADC_DelSig_1_Read32());

        AMux_1_Select(2);
        mux_pot.POF = ADC_DelSig_1_CountsTo_mVolts(ADC_DelSig_1_Read32());
        
        // Calcule la tension de la diode
        diode_tension = mux_pot.POM - mux_pot.POF;

        // Calcule le courant dans la diode
        diode_curant = (float) (mux_pot.POH - mux_pot.POM) / REFERENCE_RESISTENCE;
        
        //Send Value to UART
        sprintf(valeur, "%.3f %.3f", diode_tension, diode_curant);
        USBUART_1_PutString(valeur);
        CyDelay(5);
        USBUART_1_PutCRLF();
        
        
        // Task delay
        CyDelay(5);
    }
}

/* [] END OF FILE */
