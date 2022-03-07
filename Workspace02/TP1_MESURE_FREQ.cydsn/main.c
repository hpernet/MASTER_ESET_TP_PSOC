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
// INCLUDES -------------------------------------------------------------------------------------------------
#include <project.h>
#include <stdio.h>

// DEFINES --------------------------------------------------------------------------------------------------
#define TIMER_FREQUENCY             12000000 // timer frequency in Hz (12MHz)
#define NB_OF_SENDING_DELAY         4

// GLOBALE VARIABLE -----------------------------------------------------------------------------------------
// USB UART variables
float debug_val = 0;
char  valeur[8] = {0};

// Frequency computation variables
uint  capture_content; 
uint  old_capture_content; 
float computed_frequency;

// Sending delay variables
uint  const sending_delay_array[NB_OF_SENDING_DELAY] = {15000, 30000, 45000, 7500};
uint  sending_delay_index = 0U;
uint  sending_flag = 0;

// INTERRUPT FUNCTIONS --------------------------------------------------------------------------------------
CY_ISR(isr_timer_interrupt)
{    
    // Save last capture content
    old_capture_content = capture_content;
    capture_content = Timer_1_ReadCapture();

    // Clear interrupt flag
    Timer_1_ReadStatusRegister();
}

CY_ISR(isr_BP_interrupt)
{
    // Update sending delay index
    sending_delay_index = (sending_delay_index + 1) % NB_OF_SENDING_DELAY;
    
    PWM_1_Stop();
    
    // Update PWM config
    PWM_1_WritePeriod(sending_delay_array[sending_delay_index]);
    PWM_1_WriteCompare(sending_delay_array[sending_delay_index] / 2);

    PWM_1_Start();

    // Clear interrupt flag
    Pin_3_ClearInterrupt();
}

CY_ISR(isr_pwm_interrupt)
{
    // Set flag
    sending_flag = 1U;

    // Clear interrupt flag
    PWM_1_ReadStatusRegister();
}


// MAIN -----------------------------------------------------------------------------------------------------
int main()
{
    //-----------------------//
    //   START ALL MODULES   //
    //-----------------------//
    CyGlobalIntEnable; /* Enable global interrupts. */

    // Start USBUART    
    USBUART_1_Start(0, USBUART_1_5V_OPERATION);
    while(0 == USBUART_1_GetConfiguration())
    {
    }
    USBUART_1_CDC_Init();

    // Start comparator
    Comp_1_Start();
    
    // Start Timer
    Timer_1_Start();
    
    // Start PWM
    PWM_1_Start();
        
    //Start timer interrupt
    isr_timer_StartEx(isr_timer_interrupt);
    
    //Start BP interrupt
    isr_BP_StartEx(isr_BP_interrupt);
    
    //Start pwm interrupt
    isr_pwm_StartEx(isr_pwm_interrupt);
    
    //-----------------------//
    //     INIFINIT LOOP     //
    //-----------------------//
    for(;;)
    {
        if( 1U == sending_flag)
        {
            //Reset sending flag
            sending_flag = 0U;
            
            // Compute frequency
            computed_frequency = (float) TIMER_FREQUENCY / (float)(old_capture_content - capture_content);

            // Update debug value
            debug_val = computed_frequency;
            
            // Send debug value via USB UART
            sprintf(valeur, "%.3f", debug_val);
            USBUART_1_PutString(valeur);
            CyDelay(20);
            USBUART_1_PutCRLF();
        }
        
        // Loop delay
        CyDelay(10);
    }
}

// END OF FILE ----------------------------------------------------------------------------------------------
