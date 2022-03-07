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

void DMA_1_Config(void)
{
    /* Defines for DMA_1 */
    #define DMA_1_BYTES_PER_BURST 1
    #define DMA_1_REQUEST_PER_BURST 1
    #define DMA_1_SRC_BASE (CYDEV_PERIPH_BASE)
    #define DMA_1_DST_BASE (CYDEV_PERIPH_BASE)

    /* Variable declarations for DMA_1 */
    /* Move these variable declarations to the top of the function */
    uint8 DMA_1_Chan;
    uint8 DMA_1_TD[1];

    /* DMA Configuration for DMA_1 */
    DMA_1_Chan = DMA_1_DmaInitialize(DMA_1_BYTES_PER_BURST, DMA_1_REQUEST_PER_BURST, 
        HI16(DMA_1_SRC_BASE), HI16(DMA_1_DST_BASE));
    DMA_1_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_1_TD[0], 1, DMA_1_TD[0], 0);
    CyDmaTdSetAddress(DMA_1_TD[0], LO16((uint32)ADC_DelSig_1_DEC_SAMP_PTR), LO16((uint32)Filter_1_STAGEA_PTR));
    CyDmaChSetInitialTd(DMA_1_Chan, DMA_1_TD[0]);
    CyDmaChEnable(DMA_1_Chan, 1);
}

void DMA_2_Config(void)
{
    /* Defines for DMA_2 */
    #define DMA_2_BYTES_PER_BURST 1
    #define DMA_2_REQUEST_PER_BURST 1
    #define DMA_2_SRC_BASE (CYDEV_PERIPH_BASE)
    #define DMA_2_DST_BASE (CYDEV_PERIPH_BASE)

    /* Variable declarations for DMA_2 */
    /* Move these variable declarations to the top of the function */
    uint8 DMA_2_Chan;
    uint8 DMA_2_TD[1];

    /* DMA Configuration for DMA_2 */
    DMA_2_Chan = DMA_2_DmaInitialize(DMA_2_BYTES_PER_BURST, DMA_2_REQUEST_PER_BURST, 
    HI16(DMA_2_SRC_BASE), HI16(DMA_2_DST_BASE));
    DMA_2_TD[0] = CyDmaTdAllocate();
    CyDmaTdSetConfiguration(DMA_2_TD[0], 1, DMA_2_TD[0], 0);
    CyDmaTdSetAddress(DMA_2_TD[0], LO16((uint32)Filter_1_HOLDA_PTR), LO16((uint32)VDAC8_1_Data_PTR));
    CyDmaChSetInitialTd(DMA_2_Chan, DMA_2_TD[0]);
    CyDmaChEnable(DMA_2_Chan, 1);
}
    
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
    
    // Start Filter 
    Filter_1_Start();
    Filter_1_SetCoherency(Filter_1_CHANNEL_A, Filter_1_KEY_LOW);
    
    // Configure DMA
    DMA_1_Config();
    DMA_2_Config();
    
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
        
    }
}

/* [] END OF FILE */
