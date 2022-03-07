#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* Pin_1 */
#define Pin_1__0__INTTYPE CYREG_PICU0_INTTYPE0
#define Pin_1__0__MASK 0x01u
#define Pin_1__0__PC CYREG_PRT0_PC0
#define Pin_1__0__PORT 0u
#define Pin_1__0__SHIFT 0
#define Pin_1__AG CYREG_PRT0_AG
#define Pin_1__AMUX CYREG_PRT0_AMUX
#define Pin_1__BIE CYREG_PRT0_BIE
#define Pin_1__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_1__BYP CYREG_PRT0_BYP
#define Pin_1__CTL CYREG_PRT0_CTL
#define Pin_1__DM0 CYREG_PRT0_DM0
#define Pin_1__DM1 CYREG_PRT0_DM1
#define Pin_1__DM2 CYREG_PRT0_DM2
#define Pin_1__DR CYREG_PRT0_DR
#define Pin_1__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Pin_1__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_1__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_1__MASK 0x01u
#define Pin_1__PORT 0u
#define Pin_1__PRT CYREG_PRT0_PRT
#define Pin_1__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_1__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_1__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_1__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_1__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_1__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_1__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_1__PS CYREG_PRT0_PS
#define Pin_1__SHIFT 0
#define Pin_1__SLW CYREG_PRT0_SLW

/* Pin_2 */
#define Pin_2__0__INTTYPE CYREG_PICU15_INTTYPE1
#define Pin_2__0__MASK 0x02u
#define Pin_2__0__PC CYREG_IO_PC_PRT15_PC1
#define Pin_2__0__PORT 15u
#define Pin_2__0__SHIFT 1
#define Pin_2__AG CYREG_PRT15_AG
#define Pin_2__AMUX CYREG_PRT15_AMUX
#define Pin_2__BIE CYREG_PRT15_BIE
#define Pin_2__BIT_MASK CYREG_PRT15_BIT_MASK
#define Pin_2__BYP CYREG_PRT15_BYP
#define Pin_2__CTL CYREG_PRT15_CTL
#define Pin_2__DM0 CYREG_PRT15_DM0
#define Pin_2__DM1 CYREG_PRT15_DM1
#define Pin_2__DM2 CYREG_PRT15_DM2
#define Pin_2__DR CYREG_PRT15_DR
#define Pin_2__INP_DIS CYREG_PRT15_INP_DIS
#define Pin_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define Pin_2__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define Pin_2__LCD_EN CYREG_PRT15_LCD_EN
#define Pin_2__MASK 0x02u
#define Pin_2__PORT 15u
#define Pin_2__PRT CYREG_PRT15_PRT
#define Pin_2__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define Pin_2__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define Pin_2__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define Pin_2__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define Pin_2__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define Pin_2__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define Pin_2__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define Pin_2__PS CYREG_PRT15_PS
#define Pin_2__SHIFT 1
#define Pin_2__SLW CYREG_PRT15_SLW

/* Pin_3 */
#define Pin_3__0__INTTYPE CYREG_PICU0_INTTYPE1
#define Pin_3__0__MASK 0x02u
#define Pin_3__0__PC CYREG_PRT0_PC1
#define Pin_3__0__PORT 0u
#define Pin_3__0__SHIFT 1
#define Pin_3__AG CYREG_PRT0_AG
#define Pin_3__AMUX CYREG_PRT0_AMUX
#define Pin_3__BIE CYREG_PRT0_BIE
#define Pin_3__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_3__BYP CYREG_PRT0_BYP
#define Pin_3__CTL CYREG_PRT0_CTL
#define Pin_3__DM0 CYREG_PRT0_DM0
#define Pin_3__DM1 CYREG_PRT0_DM1
#define Pin_3__DM2 CYREG_PRT0_DM2
#define Pin_3__DR CYREG_PRT0_DR
#define Pin_3__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_3__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Pin_3__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_3__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_3__MASK 0x02u
#define Pin_3__PORT 0u
#define Pin_3__PRT CYREG_PRT0_PRT
#define Pin_3__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_3__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_3__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_3__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_3__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_3__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_3__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_3__PS CYREG_PRT0_PS
#define Pin_3__SHIFT 1
#define Pin_3__SLW CYREG_PRT0_SLW

/* Pin_4 */
#define Pin_4__0__INTTYPE CYREG_PICU0_INTTYPE2
#define Pin_4__0__MASK 0x04u
#define Pin_4__0__PC CYREG_PRT0_PC2
#define Pin_4__0__PORT 0u
#define Pin_4__0__SHIFT 2
#define Pin_4__AG CYREG_PRT0_AG
#define Pin_4__AMUX CYREG_PRT0_AMUX
#define Pin_4__BIE CYREG_PRT0_BIE
#define Pin_4__BIT_MASK CYREG_PRT0_BIT_MASK
#define Pin_4__BYP CYREG_PRT0_BYP
#define Pin_4__CTL CYREG_PRT0_CTL
#define Pin_4__DM0 CYREG_PRT0_DM0
#define Pin_4__DM1 CYREG_PRT0_DM1
#define Pin_4__DM2 CYREG_PRT0_DM2
#define Pin_4__DR CYREG_PRT0_DR
#define Pin_4__INP_DIS CYREG_PRT0_INP_DIS
#define Pin_4__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Pin_4__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Pin_4__LCD_EN CYREG_PRT0_LCD_EN
#define Pin_4__MASK 0x04u
#define Pin_4__PORT 0u
#define Pin_4__PRT CYREG_PRT0_PRT
#define Pin_4__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Pin_4__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Pin_4__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Pin_4__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Pin_4__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Pin_4__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Pin_4__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Pin_4__PS CYREG_PRT0_PS
#define Pin_4__SHIFT 2
#define Pin_4__SLW CYREG_PRT0_SLW

/* WaveDAC8_1_DacClk */
#define WaveDAC8_1_DacClk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define WaveDAC8_1_DacClk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define WaveDAC8_1_DacClk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define WaveDAC8_1_DacClk__CFG2_SRC_SEL_MASK 0x07u
#define WaveDAC8_1_DacClk__INDEX 0x00u
#define WaveDAC8_1_DacClk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define WaveDAC8_1_DacClk__PM_ACT_MSK 0x01u
#define WaveDAC8_1_DacClk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define WaveDAC8_1_DacClk__PM_STBY_MSK 0x01u

/* WaveDAC8_1_VDAC8_viDAC8 */
#define WaveDAC8_1_VDAC8_viDAC8__CR0 CYREG_DAC3_CR0
#define WaveDAC8_1_VDAC8_viDAC8__CR1 CYREG_DAC3_CR1
#define WaveDAC8_1_VDAC8_viDAC8__D CYREG_DAC3_D
#define WaveDAC8_1_VDAC8_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define WaveDAC8_1_VDAC8_viDAC8__PM_ACT_MSK 0x08u
#define WaveDAC8_1_VDAC8_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define WaveDAC8_1_VDAC8_viDAC8__PM_STBY_MSK 0x08u
#define WaveDAC8_1_VDAC8_viDAC8__STROBE CYREG_DAC3_STROBE
#define WaveDAC8_1_VDAC8_viDAC8__SW0 CYREG_DAC3_SW0
#define WaveDAC8_1_VDAC8_viDAC8__SW2 CYREG_DAC3_SW2
#define WaveDAC8_1_VDAC8_viDAC8__SW3 CYREG_DAC3_SW3
#define WaveDAC8_1_VDAC8_viDAC8__SW4 CYREG_DAC3_SW4
#define WaveDAC8_1_VDAC8_viDAC8__TR CYREG_DAC3_TR
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC3_M1
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC3_M2
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC3_M3
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC3_M4
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC3_M5
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC3_M6
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC3_M7
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC3_M8
#define WaveDAC8_1_VDAC8_viDAC8__TST CYREG_DAC3_TST

/* WaveDAC8_1_Wave1_DMA */
#define WaveDAC8_1_Wave1_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define WaveDAC8_1_Wave1_DMA__DRQ_NUMBER 0u
#define WaveDAC8_1_Wave1_DMA__NUMBEROF_TDS 0u
#define WaveDAC8_1_Wave1_DMA__PRIORITY 2u
#define WaveDAC8_1_Wave1_DMA__TERMIN_EN 0u
#define WaveDAC8_1_Wave1_DMA__TERMIN_SEL 0u
#define WaveDAC8_1_Wave1_DMA__TERMOUT0_EN 1u
#define WaveDAC8_1_Wave1_DMA__TERMOUT0_SEL 0u
#define WaveDAC8_1_Wave1_DMA__TERMOUT1_EN 0u
#define WaveDAC8_1_Wave1_DMA__TERMOUT1_SEL 0u

/* WaveDAC8_1_Wave2_DMA */
#define WaveDAC8_1_Wave2_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define WaveDAC8_1_Wave2_DMA__DRQ_NUMBER 1u
#define WaveDAC8_1_Wave2_DMA__NUMBEROF_TDS 0u
#define WaveDAC8_1_Wave2_DMA__PRIORITY 2u
#define WaveDAC8_1_Wave2_DMA__TERMIN_EN 0u
#define WaveDAC8_1_Wave2_DMA__TERMIN_SEL 0u
#define WaveDAC8_1_Wave2_DMA__TERMOUT0_EN 1u
#define WaveDAC8_1_Wave2_DMA__TERMOUT0_SEL 1u
#define WaveDAC8_1_Wave2_DMA__TERMOUT1_EN 0u
#define WaveDAC8_1_Wave2_DMA__TERMOUT1_SEL 0u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "FSK"
#define CY_VERSION "PSoC Creator  3.3 CP2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000003u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */