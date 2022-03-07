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
#include <project.h>

uint16 tab_led_intensity[4] = {0, 85, 170, 255};
uint8_t led_intensity_index = 0;

CY_ISR(isr_1_interrupt)
{
 /* ISR Code here */
    led_intensity_index = (led_intensity_index + 1) % 4;
    
    PWM_2_WriteCompare(tab_led_intensity[led_intensity_index]);
    CyDelay(1000);
}
int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PWM_1_Start();
    
    PWM_2_Start();

    PGA_1_Start();
    
    Comp_1_Start();
    
        //Start extern interrupt
    isr_1_StartEx(isr_1_interrupt);
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
