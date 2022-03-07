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

// Variable declaration
int8_t adc_value; 

// MAIN
int main()
{
    //-----------------------//
    //   START ALL MODULES   //
    //-----------------------//
    CyGlobalIntEnable; /* Enable global interrupts. */

    // Start ADC  
    ADC_DelSig_1_Start();
    
    // Start DAC
    VDAC8_1_Start();
    
    //-----------------------//
    //    INITIALIZATION     //
    //-----------------------//
    //Start ADC conversion
    ADC_DelSig_1_StartConvert();

    //-----------------------//
    //     INIFINIT LOOP     //
    //-----------------------//
    for(;;)
    {
        // Nothing to do here 
    }
}
/* [] END OF FILE */
