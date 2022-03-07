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

// DEFINE ---------------------------------------------------------------------------------------------------

// GLOBALES VARIABLES ---------------------------------------------------------------------------------------

// PRIVATE FUNCTIONS ----------------------------------------------------------------------------------------

// MAIN -----------------------------------------------------------------------------------------------------
int main()
{
    //-----------------------//
    //   START ALL MODULES   //
    //-----------------------//
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    //Capsense 
    CapSense_1_Start();
    CapSense_1_EnableWidget(CapSense_1_PROXIMITYSENSOR0__PROX);
    CapSense_1_InitializeAllBaselines();
    
    //-----------------------//
    //     INIFINIT LOOP     //
    //-----------------------//
    while(1u)
    {
        if (0u == CapSense_1_IsBusy())
        {
            CapSense_1_UpdateEnabledBaselines();
            CapSense_1_ScanEnabledWidgets();
        }
        if (CapSense_1_CheckIsWidgetActive(CapSense_1_PROXIMITYSENSOR0__PROX))
        {
            Pin_1_Write(1u);
        }
        else 
        {
            Pin_1_Write(0u);
        }
    }
}

// END OF FILE ----------------------------------------------------------------------------------------------
