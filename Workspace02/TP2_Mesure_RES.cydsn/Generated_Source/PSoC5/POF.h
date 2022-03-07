/*******************************************************************************
* File Name: POF.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_POF_H) /* Pins POF_H */
#define CY_PINS_POF_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "POF_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 POF__PORT == 15 && ((POF__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    POF_Write(uint8 value);
void    POF_SetDriveMode(uint8 mode);
uint8   POF_ReadDataReg(void);
uint8   POF_Read(void);
void    POF_SetInterruptMode(uint16 position, uint16 mode);
uint8   POF_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the POF_SetDriveMode() function.
     *  @{
     */
        #define POF_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define POF_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define POF_DM_RES_UP          PIN_DM_RES_UP
        #define POF_DM_RES_DWN         PIN_DM_RES_DWN
        #define POF_DM_OD_LO           PIN_DM_OD_LO
        #define POF_DM_OD_HI           PIN_DM_OD_HI
        #define POF_DM_STRONG          PIN_DM_STRONG
        #define POF_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define POF_MASK               POF__MASK
#define POF_SHIFT              POF__SHIFT
#define POF_WIDTH              1u

/* Interrupt constants */
#if defined(POF__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in POF_SetInterruptMode() function.
     *  @{
     */
        #define POF_INTR_NONE      (uint16)(0x0000u)
        #define POF_INTR_RISING    (uint16)(0x0001u)
        #define POF_INTR_FALLING   (uint16)(0x0002u)
        #define POF_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define POF_INTR_MASK      (0x01u) 
#endif /* (POF__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define POF_PS                     (* (reg8 *) POF__PS)
/* Data Register */
#define POF_DR                     (* (reg8 *) POF__DR)
/* Port Number */
#define POF_PRT_NUM                (* (reg8 *) POF__PRT) 
/* Connect to Analog Globals */                                                  
#define POF_AG                     (* (reg8 *) POF__AG)                       
/* Analog MUX bux enable */
#define POF_AMUX                   (* (reg8 *) POF__AMUX) 
/* Bidirectional Enable */                                                        
#define POF_BIE                    (* (reg8 *) POF__BIE)
/* Bit-mask for Aliased Register Access */
#define POF_BIT_MASK               (* (reg8 *) POF__BIT_MASK)
/* Bypass Enable */
#define POF_BYP                    (* (reg8 *) POF__BYP)
/* Port wide control signals */                                                   
#define POF_CTL                    (* (reg8 *) POF__CTL)
/* Drive Modes */
#define POF_DM0                    (* (reg8 *) POF__DM0) 
#define POF_DM1                    (* (reg8 *) POF__DM1)
#define POF_DM2                    (* (reg8 *) POF__DM2) 
/* Input Buffer Disable Override */
#define POF_INP_DIS                (* (reg8 *) POF__INP_DIS)
/* LCD Common or Segment Drive */
#define POF_LCD_COM_SEG            (* (reg8 *) POF__LCD_COM_SEG)
/* Enable Segment LCD */
#define POF_LCD_EN                 (* (reg8 *) POF__LCD_EN)
/* Slew Rate Control */
#define POF_SLW                    (* (reg8 *) POF__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define POF_PRTDSI__CAPS_SEL       (* (reg8 *) POF__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define POF_PRTDSI__DBL_SYNC_IN    (* (reg8 *) POF__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define POF_PRTDSI__OE_SEL0        (* (reg8 *) POF__PRTDSI__OE_SEL0) 
#define POF_PRTDSI__OE_SEL1        (* (reg8 *) POF__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define POF_PRTDSI__OUT_SEL0       (* (reg8 *) POF__PRTDSI__OUT_SEL0) 
#define POF_PRTDSI__OUT_SEL1       (* (reg8 *) POF__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define POF_PRTDSI__SYNC_OUT       (* (reg8 *) POF__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(POF__SIO_CFG)
    #define POF_SIO_HYST_EN        (* (reg8 *) POF__SIO_HYST_EN)
    #define POF_SIO_REG_HIFREQ     (* (reg8 *) POF__SIO_REG_HIFREQ)
    #define POF_SIO_CFG            (* (reg8 *) POF__SIO_CFG)
    #define POF_SIO_DIFF           (* (reg8 *) POF__SIO_DIFF)
#endif /* (POF__SIO_CFG) */

/* Interrupt Registers */
#if defined(POF__INTSTAT)
    #define POF_INTSTAT            (* (reg8 *) POF__INTSTAT)
    #define POF_SNAP               (* (reg8 *) POF__SNAP)
    
	#define POF_0_INTTYPE_REG 		(* (reg8 *) POF__0__INTTYPE)
#endif /* (POF__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_POF_H */


/* [] END OF FILE */
