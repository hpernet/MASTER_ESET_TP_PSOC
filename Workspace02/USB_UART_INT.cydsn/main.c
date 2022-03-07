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
#include <stdio.h>

int val        = 0;
int increment  = 1; 
char valeur[8] = {0};

CY_ISR(isr_1_interrupt)
{
 /* ISR Code here */
    increment = (-1) * increment;
    Pin_1_ClearInterrupt();
}

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    // Start UART
    USBUART_1_Start(0, USBUART_1_5V_OPERATION);
    while(0 == USBUART_1_GetConfiguration())
    {
    }
    USBUART_1_CDC_Init();
     
    //Start extern interrupt
    isr_1_StartEx(isr_1_interrupt);
    
    for(;;)
    {
        /* Place your application code here. */
        CyDelay(100);
        val += increment;
        
        sprintf(valeur, "%d", val);
        USBUART_1_PutString(valeur);
        CyDelay(10);
        USBUART_1_PutCRLF();
    }
}

/* [] END OF FILE */
