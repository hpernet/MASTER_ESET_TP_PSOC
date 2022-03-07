#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* Pin_1 */
Pin_1__0__INTTYPE EQU CYREG_PICU2_INTTYPE2
Pin_1__0__MASK EQU 0x04
Pin_1__0__PC EQU CYREG_PRT2_PC2
Pin_1__0__PORT EQU 2
Pin_1__0__SHIFT EQU 2
Pin_1__AG EQU CYREG_PRT2_AG
Pin_1__AMUX EQU CYREG_PRT2_AMUX
Pin_1__BIE EQU CYREG_PRT2_BIE
Pin_1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Pin_1__BYP EQU CYREG_PRT2_BYP
Pin_1__CTL EQU CYREG_PRT2_CTL
Pin_1__DM0 EQU CYREG_PRT2_DM0
Pin_1__DM1 EQU CYREG_PRT2_DM1
Pin_1__DM2 EQU CYREG_PRT2_DM2
Pin_1__DR EQU CYREG_PRT2_DR
Pin_1__INP_DIS EQU CYREG_PRT2_INP_DIS
Pin_1__INTSTAT EQU CYREG_PICU2_INTSTAT
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Pin_1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Pin_1__LCD_EN EQU CYREG_PRT2_LCD_EN
Pin_1__MASK EQU 0x04
Pin_1__PORT EQU 2
Pin_1__PRT EQU CYREG_PRT2_PRT
Pin_1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Pin_1__PS EQU CYREG_PRT2_PS
Pin_1__SHIFT EQU 2
Pin_1__SLW EQU CYREG_PRT2_SLW
Pin_1__SNAP EQU CYREG_PICU2_SNAP

/* isr_1 */
isr_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
isr_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
isr_1__INTC_MASK EQU 0x40
isr_1__INTC_NUMBER EQU 6
isr_1__INTC_PRIOR_NUM EQU 7
isr_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_6
isr_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
isr_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* USBUART_1_arb_int */
USBUART_1_arb_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_1_arb_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_1_arb_int__INTC_MASK EQU 0x400000
USBUART_1_arb_int__INTC_NUMBER EQU 22
USBUART_1_arb_int__INTC_PRIOR_NUM EQU 7
USBUART_1_arb_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_22
USBUART_1_arb_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_1_arb_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* USBUART_1_bus_reset */
USBUART_1_bus_reset__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_1_bus_reset__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_1_bus_reset__INTC_MASK EQU 0x800000
USBUART_1_bus_reset__INTC_NUMBER EQU 23
USBUART_1_bus_reset__INTC_PRIOR_NUM EQU 7
USBUART_1_bus_reset__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_23
USBUART_1_bus_reset__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_1_bus_reset__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* USBUART_1_Dm */
USBUART_1_Dm__0__INTTYPE EQU CYREG_PICU15_INTTYPE7
USBUART_1_Dm__0__MASK EQU 0x80
USBUART_1_Dm__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC1
USBUART_1_Dm__0__PORT EQU 15
USBUART_1_Dm__0__SHIFT EQU 7
USBUART_1_Dm__AG EQU CYREG_PRT15_AG
USBUART_1_Dm__AMUX EQU CYREG_PRT15_AMUX
USBUART_1_Dm__BIE EQU CYREG_PRT15_BIE
USBUART_1_Dm__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_1_Dm__BYP EQU CYREG_PRT15_BYP
USBUART_1_Dm__CTL EQU CYREG_PRT15_CTL
USBUART_1_Dm__DM0 EQU CYREG_PRT15_DM0
USBUART_1_Dm__DM1 EQU CYREG_PRT15_DM1
USBUART_1_Dm__DM2 EQU CYREG_PRT15_DM2
USBUART_1_Dm__DR EQU CYREG_PRT15_DR
USBUART_1_Dm__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_1_Dm__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBUART_1_Dm__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_1_Dm__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_1_Dm__MASK EQU 0x80
USBUART_1_Dm__PORT EQU 15
USBUART_1_Dm__PRT EQU CYREG_PRT15_PRT
USBUART_1_Dm__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_1_Dm__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_1_Dm__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_1_Dm__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_1_Dm__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_1_Dm__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_1_Dm__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_1_Dm__PS EQU CYREG_PRT15_PS
USBUART_1_Dm__SHIFT EQU 7
USBUART_1_Dm__SLW EQU CYREG_PRT15_SLW

/* USBUART_1_Dp */
USBUART_1_Dp__0__INTTYPE EQU CYREG_PICU15_INTTYPE6
USBUART_1_Dp__0__MASK EQU 0x40
USBUART_1_Dp__0__PC EQU CYREG_IO_PC_PRT15_7_6_PC0
USBUART_1_Dp__0__PORT EQU 15
USBUART_1_Dp__0__SHIFT EQU 6
USBUART_1_Dp__AG EQU CYREG_PRT15_AG
USBUART_1_Dp__AMUX EQU CYREG_PRT15_AMUX
USBUART_1_Dp__BIE EQU CYREG_PRT15_BIE
USBUART_1_Dp__BIT_MASK EQU CYREG_PRT15_BIT_MASK
USBUART_1_Dp__BYP EQU CYREG_PRT15_BYP
USBUART_1_Dp__CTL EQU CYREG_PRT15_CTL
USBUART_1_Dp__DM0 EQU CYREG_PRT15_DM0
USBUART_1_Dp__DM1 EQU CYREG_PRT15_DM1
USBUART_1_Dp__DM2 EQU CYREG_PRT15_DM2
USBUART_1_Dp__DR EQU CYREG_PRT15_DR
USBUART_1_Dp__INP_DIS EQU CYREG_PRT15_INP_DIS
USBUART_1_Dp__INTSTAT EQU CYREG_PICU15_INTSTAT
USBUART_1_Dp__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
USBUART_1_Dp__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
USBUART_1_Dp__LCD_EN EQU CYREG_PRT15_LCD_EN
USBUART_1_Dp__MASK EQU 0x40
USBUART_1_Dp__PORT EQU 15
USBUART_1_Dp__PRT EQU CYREG_PRT15_PRT
USBUART_1_Dp__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
USBUART_1_Dp__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
USBUART_1_Dp__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
USBUART_1_Dp__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
USBUART_1_Dp__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
USBUART_1_Dp__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
USBUART_1_Dp__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
USBUART_1_Dp__PS EQU CYREG_PRT15_PS
USBUART_1_Dp__SHIFT EQU 6
USBUART_1_Dp__SLW EQU CYREG_PRT15_SLW
USBUART_1_Dp__SNAP EQU CYREG_PICU_15_SNAP_15

/* USBUART_1_dp_int */
USBUART_1_dp_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_1_dp_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_1_dp_int__INTC_MASK EQU 0x1000
USBUART_1_dp_int__INTC_NUMBER EQU 12
USBUART_1_dp_int__INTC_PRIOR_NUM EQU 7
USBUART_1_dp_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_12
USBUART_1_dp_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_1_dp_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* USBUART_1_ep_0 */
USBUART_1_ep_0__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_1_ep_0__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_1_ep_0__INTC_MASK EQU 0x1000000
USBUART_1_ep_0__INTC_NUMBER EQU 24
USBUART_1_ep_0__INTC_PRIOR_NUM EQU 7
USBUART_1_ep_0__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_24
USBUART_1_ep_0__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_1_ep_0__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* USBUART_1_ep_1 */
USBUART_1_ep_1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_1_ep_1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_1_ep_1__INTC_MASK EQU 0x01
USBUART_1_ep_1__INTC_NUMBER EQU 0
USBUART_1_ep_1__INTC_PRIOR_NUM EQU 7
USBUART_1_ep_1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
USBUART_1_ep_1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_1_ep_1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* USBUART_1_ep_2 */
USBUART_1_ep_2__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_1_ep_2__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_1_ep_2__INTC_MASK EQU 0x02
USBUART_1_ep_2__INTC_NUMBER EQU 1
USBUART_1_ep_2__INTC_PRIOR_NUM EQU 7
USBUART_1_ep_2__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
USBUART_1_ep_2__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_1_ep_2__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* USBUART_1_ep_3 */
USBUART_1_ep_3__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_1_ep_3__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_1_ep_3__INTC_MASK EQU 0x04
USBUART_1_ep_3__INTC_NUMBER EQU 2
USBUART_1_ep_3__INTC_PRIOR_NUM EQU 7
USBUART_1_ep_3__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_2
USBUART_1_ep_3__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_1_ep_3__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* USBUART_1_sof_int */
USBUART_1_sof_int__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
USBUART_1_sof_int__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
USBUART_1_sof_int__INTC_MASK EQU 0x200000
USBUART_1_sof_int__INTC_NUMBER EQU 21
USBUART_1_sof_int__INTC_PRIOR_NUM EQU 7
USBUART_1_sof_int__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_21
USBUART_1_sof_int__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
USBUART_1_sof_int__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* USBUART_1_USB */
USBUART_1_USB__ARB_CFG EQU CYREG_USB_ARB_CFG
USBUART_1_USB__ARB_EP1_CFG EQU CYREG_USB_ARB_EP1_CFG
USBUART_1_USB__ARB_EP1_INT_EN EQU CYREG_USB_ARB_EP1_INT_EN
USBUART_1_USB__ARB_EP1_SR EQU CYREG_USB_ARB_EP1_SR
USBUART_1_USB__ARB_EP2_CFG EQU CYREG_USB_ARB_EP2_CFG
USBUART_1_USB__ARB_EP2_INT_EN EQU CYREG_USB_ARB_EP2_INT_EN
USBUART_1_USB__ARB_EP2_SR EQU CYREG_USB_ARB_EP2_SR
USBUART_1_USB__ARB_EP3_CFG EQU CYREG_USB_ARB_EP3_CFG
USBUART_1_USB__ARB_EP3_INT_EN EQU CYREG_USB_ARB_EP3_INT_EN
USBUART_1_USB__ARB_EP3_SR EQU CYREG_USB_ARB_EP3_SR
USBUART_1_USB__ARB_EP4_CFG EQU CYREG_USB_ARB_EP4_CFG
USBUART_1_USB__ARB_EP4_INT_EN EQU CYREG_USB_ARB_EP4_INT_EN
USBUART_1_USB__ARB_EP4_SR EQU CYREG_USB_ARB_EP4_SR
USBUART_1_USB__ARB_EP5_CFG EQU CYREG_USB_ARB_EP5_CFG
USBUART_1_USB__ARB_EP5_INT_EN EQU CYREG_USB_ARB_EP5_INT_EN
USBUART_1_USB__ARB_EP5_SR EQU CYREG_USB_ARB_EP5_SR
USBUART_1_USB__ARB_EP6_CFG EQU CYREG_USB_ARB_EP6_CFG
USBUART_1_USB__ARB_EP6_INT_EN EQU CYREG_USB_ARB_EP6_INT_EN
USBUART_1_USB__ARB_EP6_SR EQU CYREG_USB_ARB_EP6_SR
USBUART_1_USB__ARB_EP7_CFG EQU CYREG_USB_ARB_EP7_CFG
USBUART_1_USB__ARB_EP7_INT_EN EQU CYREG_USB_ARB_EP7_INT_EN
USBUART_1_USB__ARB_EP7_SR EQU CYREG_USB_ARB_EP7_SR
USBUART_1_USB__ARB_EP8_CFG EQU CYREG_USB_ARB_EP8_CFG
USBUART_1_USB__ARB_EP8_INT_EN EQU CYREG_USB_ARB_EP8_INT_EN
USBUART_1_USB__ARB_EP8_SR EQU CYREG_USB_ARB_EP8_SR
USBUART_1_USB__ARB_INT_EN EQU CYREG_USB_ARB_INT_EN
USBUART_1_USB__ARB_INT_SR EQU CYREG_USB_ARB_INT_SR
USBUART_1_USB__ARB_RW1_DR EQU CYREG_USB_ARB_RW1_DR
USBUART_1_USB__ARB_RW1_RA EQU CYREG_USB_ARB_RW1_RA
USBUART_1_USB__ARB_RW1_RA_MSB EQU CYREG_USB_ARB_RW1_RA_MSB
USBUART_1_USB__ARB_RW1_WA EQU CYREG_USB_ARB_RW1_WA
USBUART_1_USB__ARB_RW1_WA_MSB EQU CYREG_USB_ARB_RW1_WA_MSB
USBUART_1_USB__ARB_RW2_DR EQU CYREG_USB_ARB_RW2_DR
USBUART_1_USB__ARB_RW2_RA EQU CYREG_USB_ARB_RW2_RA
USBUART_1_USB__ARB_RW2_RA_MSB EQU CYREG_USB_ARB_RW2_RA_MSB
USBUART_1_USB__ARB_RW2_WA EQU CYREG_USB_ARB_RW2_WA
USBUART_1_USB__ARB_RW2_WA_MSB EQU CYREG_USB_ARB_RW2_WA_MSB
USBUART_1_USB__ARB_RW3_DR EQU CYREG_USB_ARB_RW3_DR
USBUART_1_USB__ARB_RW3_RA EQU CYREG_USB_ARB_RW3_RA
USBUART_1_USB__ARB_RW3_RA_MSB EQU CYREG_USB_ARB_RW3_RA_MSB
USBUART_1_USB__ARB_RW3_WA EQU CYREG_USB_ARB_RW3_WA
USBUART_1_USB__ARB_RW3_WA_MSB EQU CYREG_USB_ARB_RW3_WA_MSB
USBUART_1_USB__ARB_RW4_DR EQU CYREG_USB_ARB_RW4_DR
USBUART_1_USB__ARB_RW4_RA EQU CYREG_USB_ARB_RW4_RA
USBUART_1_USB__ARB_RW4_RA_MSB EQU CYREG_USB_ARB_RW4_RA_MSB
USBUART_1_USB__ARB_RW4_WA EQU CYREG_USB_ARB_RW4_WA
USBUART_1_USB__ARB_RW4_WA_MSB EQU CYREG_USB_ARB_RW4_WA_MSB
USBUART_1_USB__ARB_RW5_DR EQU CYREG_USB_ARB_RW5_DR
USBUART_1_USB__ARB_RW5_RA EQU CYREG_USB_ARB_RW5_RA
USBUART_1_USB__ARB_RW5_RA_MSB EQU CYREG_USB_ARB_RW5_RA_MSB
USBUART_1_USB__ARB_RW5_WA EQU CYREG_USB_ARB_RW5_WA
USBUART_1_USB__ARB_RW5_WA_MSB EQU CYREG_USB_ARB_RW5_WA_MSB
USBUART_1_USB__ARB_RW6_DR EQU CYREG_USB_ARB_RW6_DR
USBUART_1_USB__ARB_RW6_RA EQU CYREG_USB_ARB_RW6_RA
USBUART_1_USB__ARB_RW6_RA_MSB EQU CYREG_USB_ARB_RW6_RA_MSB
USBUART_1_USB__ARB_RW6_WA EQU CYREG_USB_ARB_RW6_WA
USBUART_1_USB__ARB_RW6_WA_MSB EQU CYREG_USB_ARB_RW6_WA_MSB
USBUART_1_USB__ARB_RW7_DR EQU CYREG_USB_ARB_RW7_DR
USBUART_1_USB__ARB_RW7_RA EQU CYREG_USB_ARB_RW7_RA
USBUART_1_USB__ARB_RW7_RA_MSB EQU CYREG_USB_ARB_RW7_RA_MSB
USBUART_1_USB__ARB_RW7_WA EQU CYREG_USB_ARB_RW7_WA
USBUART_1_USB__ARB_RW7_WA_MSB EQU CYREG_USB_ARB_RW7_WA_MSB
USBUART_1_USB__ARB_RW8_DR EQU CYREG_USB_ARB_RW8_DR
USBUART_1_USB__ARB_RW8_RA EQU CYREG_USB_ARB_RW8_RA
USBUART_1_USB__ARB_RW8_RA_MSB EQU CYREG_USB_ARB_RW8_RA_MSB
USBUART_1_USB__ARB_RW8_WA EQU CYREG_USB_ARB_RW8_WA
USBUART_1_USB__ARB_RW8_WA_MSB EQU CYREG_USB_ARB_RW8_WA_MSB
USBUART_1_USB__BUF_SIZE EQU CYREG_USB_BUF_SIZE
USBUART_1_USB__BUS_RST_CNT EQU CYREG_USB_BUS_RST_CNT
USBUART_1_USB__CR0 EQU CYREG_USB_CR0
USBUART_1_USB__CR1 EQU CYREG_USB_CR1
USBUART_1_USB__CWA EQU CYREG_USB_CWA
USBUART_1_USB__CWA_MSB EQU CYREG_USB_CWA_MSB
USBUART_1_USB__DMA_THRES EQU CYREG_USB_DMA_THRES
USBUART_1_USB__DMA_THRES_MSB EQU CYREG_USB_DMA_THRES_MSB
USBUART_1_USB__DYN_RECONFIG EQU CYREG_USB_DYN_RECONFIG
USBUART_1_USB__EP_ACTIVE EQU CYREG_USB_EP_ACTIVE
USBUART_1_USB__EP_TYPE EQU CYREG_USB_EP_TYPE
USBUART_1_USB__EP0_CNT EQU CYREG_USB_EP0_CNT
USBUART_1_USB__EP0_CR EQU CYREG_USB_EP0_CR
USBUART_1_USB__EP0_DR0 EQU CYREG_USB_EP0_DR0
USBUART_1_USB__EP0_DR1 EQU CYREG_USB_EP0_DR1
USBUART_1_USB__EP0_DR2 EQU CYREG_USB_EP0_DR2
USBUART_1_USB__EP0_DR3 EQU CYREG_USB_EP0_DR3
USBUART_1_USB__EP0_DR4 EQU CYREG_USB_EP0_DR4
USBUART_1_USB__EP0_DR5 EQU CYREG_USB_EP0_DR5
USBUART_1_USB__EP0_DR6 EQU CYREG_USB_EP0_DR6
USBUART_1_USB__EP0_DR7 EQU CYREG_USB_EP0_DR7
USBUART_1_USB__MEM_DATA EQU CYREG_USB_MEM_DATA_MBASE
USBUART_1_USB__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
USBUART_1_USB__PM_ACT_MSK EQU 0x01
USBUART_1_USB__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
USBUART_1_USB__PM_STBY_MSK EQU 0x01
USBUART_1_USB__SIE_EP_INT_EN EQU CYREG_USB_SIE_EP_INT_EN
USBUART_1_USB__SIE_EP_INT_SR EQU CYREG_USB_SIE_EP_INT_SR
USBUART_1_USB__SIE_EP1_CNT0 EQU CYREG_USB_SIE_EP1_CNT0
USBUART_1_USB__SIE_EP1_CNT1 EQU CYREG_USB_SIE_EP1_CNT1
USBUART_1_USB__SIE_EP1_CR0 EQU CYREG_USB_SIE_EP1_CR0
USBUART_1_USB__SIE_EP2_CNT0 EQU CYREG_USB_SIE_EP2_CNT0
USBUART_1_USB__SIE_EP2_CNT1 EQU CYREG_USB_SIE_EP2_CNT1
USBUART_1_USB__SIE_EP2_CR0 EQU CYREG_USB_SIE_EP2_CR0
USBUART_1_USB__SIE_EP3_CNT0 EQU CYREG_USB_SIE_EP3_CNT0
USBUART_1_USB__SIE_EP3_CNT1 EQU CYREG_USB_SIE_EP3_CNT1
USBUART_1_USB__SIE_EP3_CR0 EQU CYREG_USB_SIE_EP3_CR0
USBUART_1_USB__SIE_EP4_CNT0 EQU CYREG_USB_SIE_EP4_CNT0
USBUART_1_USB__SIE_EP4_CNT1 EQU CYREG_USB_SIE_EP4_CNT1
USBUART_1_USB__SIE_EP4_CR0 EQU CYREG_USB_SIE_EP4_CR0
USBUART_1_USB__SIE_EP5_CNT0 EQU CYREG_USB_SIE_EP5_CNT0
USBUART_1_USB__SIE_EP5_CNT1 EQU CYREG_USB_SIE_EP5_CNT1
USBUART_1_USB__SIE_EP5_CR0 EQU CYREG_USB_SIE_EP5_CR0
USBUART_1_USB__SIE_EP6_CNT0 EQU CYREG_USB_SIE_EP6_CNT0
USBUART_1_USB__SIE_EP6_CNT1 EQU CYREG_USB_SIE_EP6_CNT1
USBUART_1_USB__SIE_EP6_CR0 EQU CYREG_USB_SIE_EP6_CR0
USBUART_1_USB__SIE_EP7_CNT0 EQU CYREG_USB_SIE_EP7_CNT0
USBUART_1_USB__SIE_EP7_CNT1 EQU CYREG_USB_SIE_EP7_CNT1
USBUART_1_USB__SIE_EP7_CR0 EQU CYREG_USB_SIE_EP7_CR0
USBUART_1_USB__SIE_EP8_CNT0 EQU CYREG_USB_SIE_EP8_CNT0
USBUART_1_USB__SIE_EP8_CNT1 EQU CYREG_USB_SIE_EP8_CNT1
USBUART_1_USB__SIE_EP8_CR0 EQU CYREG_USB_SIE_EP8_CR0
USBUART_1_USB__SOF0 EQU CYREG_USB_SOF0
USBUART_1_USB__SOF1 EQU CYREG_USB_SOF1
USBUART_1_USB__USB_CLK_EN EQU CYREG_USB_USB_CLK_EN
USBUART_1_USB__USBIO_CR0 EQU CYREG_USB_USBIO_CR0
USBUART_1_USB__USBIO_CR1 EQU CYREG_USB_USBIO_CR1

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP EQU 1
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */