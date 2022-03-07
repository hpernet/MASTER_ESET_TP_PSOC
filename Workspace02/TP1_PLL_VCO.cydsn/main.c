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
    // Initialize IDAC8_1
    IDAC8_1_Start();
    Comp_1_Start();
    Mixer_1_Start();

    for( ; ; )
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
