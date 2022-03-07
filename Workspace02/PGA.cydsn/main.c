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

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    PGA_1_Start();
    
    for(;;)
    {
        /* Place your application code here. */
        PGA_1_SetGain(PGA_1_GAIN_04);
        CyDelay(50);
        PGA_1_SetGain(PGA_1_GAIN_08);
        CyDelay(50);
    }
}

/* [] END OF FILE */
