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
#define TIMER_FREQUENCY  12000000 // timer frequency in Hz (12MHz)

// GLOBALE VARIABLE -----------------------------------------------------------------------------------------
int  val                 = 0;
char valeur[8]           = {0};
int  capture_content     = 0U; 
int  old_capture_content = 0U; 
int  computed_frequency  = 0U;


// PRIVATE FUNCTIONS ----------------------------------------------------------------------------------------

// INTERRUPT FUNCTIONS --------------------------------------------------------------------------------------
CY_ISR(isr_1_interrupt)
{
    // 
    capture_content = Timer_1_ReadCapture();
    computed_frequency = (capture_content - old_capture_content) / TIMER_FREQUENCY;
    
    // Save last capture content
    old_capture_content = capture_content;
    
    // Clear interrupt flags
    Timer_1_ReadStatusRegister();
}

// MAIN -----------------------------------------------------------------------------------------------------
int main()
{
    //-----------------------//
    //   START ALL MODULES   //
    //-----------------------//
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    //USB
    USBUART_1_Start(0, USBUART_1_5V_OPERATION);
    while(0 == USBUART_1_GetConfiguration())
    {
    }
    USBUART_1_CDC_Init();

        // Start Timer
    Timer_1_Start();
        
    //Start extern interrupt
    isr_1_StartEx(isr_1_interrupt);
    
    //-----------------------//
    //     INIFINIT LOOP     //
    //-----------------------//
    for(;;)
    {
        val = computed_frequency;
        sprintf(valeur, "%d", val);
        USBUART_1_PutString(valeur);
        CyDelay(100);
        USBUART_1_PutCRLF();
    }
}

// END OF FILE ----------------------------------------------------------------------------------------------
