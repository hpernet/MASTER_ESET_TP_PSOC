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
#define SINUSTABLE_ARRAY 10

// GLOBALES VARIABLES ---------------------------------------------------------------------------------------
uint8_t g_sinus_table[SINUSTABLE_ARRAY] = {0x0, 0x4E, 0x95, 0xCE, 0xF2, 0xFE, 0xF2, 0xCE, 0x96, 0x4F};

// PRIVATE FUNCTIONS ----------------------------------------------------------------------------------------
void DMA_1_Config(void)
{
    /* Defines for DMA_1 */
    #define DMA_1_BYTES_PER_BURST 1
    #define DMA_1_REQUEST_PER_BURST 1
    #define DMA_1_SRC_BASE (CYDEV_SRAM_BASE)
    #define DMA_1_DST_BASE (CYDEV_PERIPH_BASE)

    /* Variable declarations for DMA_1 */
    /* Move these variable declarations to the top of the function */
    uint8 DMA_1_Chan;
    uint8 DMA_1_TD[1];

    /* DMA Configuration for DMA_1 */
    DMA_1_Chan = DMA_1_DmaInitialize(DMA_1_BYTES_PER_BURST, DMA_1_REQUEST_PER_BURST, 
        HI16(DMA_1_SRC_BASE), HI16(DMA_1_DST_BASE));
    DMA_1_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_1_TD[0], 10, DMA_1_TD[0], TD_INC_SRC_ADR);
    CyDmaTdSetAddress(DMA_1_TD[0], LO16((uint32)g_sinus_table), LO16((uint32)VDAC8_1_Data_PTR));
    CyDmaChSetInitialTd(DMA_1_Chan, DMA_1_TD[0]);
    CyDmaChEnable(DMA_1_Chan, 1);
}
    
// MAIN -----------------------------------------------------------------------------------------------------
int main()
{
    //-----------------------//
    //   START ALL MODULES   //
    //-----------------------//
    CyGlobalIntEnable; /* Enable global interrupts. */

    // Start DAC
    VDAC8_1_Start();
    Timer_1_Start();

    // Configure DMA
    DMA_1_Config();
    
    
    //-----------------------//
    //     INIFINIT LOOP     //
    //-----------------------//
    for(;;)
    {
        
    }
}

// END OF FILE ----------------------------------------------------------------------------------------------
