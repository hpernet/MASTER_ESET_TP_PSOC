/*******************************************************************************
* File Name: POM.h  
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

#if !defined(CY_PINS_POM_H) /* Pins POM_H */
#define CY_PINS_POM_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "POM_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 POM__PORT == 15 && ((POM__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    POM_Write(uint8 value);
void    POM_SetDriveMode(uint8 mode);
uint8   POM_ReadDataReg(void);
uint8   POM_Read(void);
void    POM_SetInterruptMode(uint16 position, uint16 mode);
uint8   POM_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the POM_SetDriveMode() function.
     *  @{
     */
        #define POM_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define POM_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define POM_DM_RES_UP          PIN_DM_RES_UP
        #define POM_DM_RES_DWN         PIN_DM_RES_DWN
        #define POM_DM_OD_LO           PIN_DM_OD_LO
        #define POM_DM_OD_HI           PIN_DM_OD_HI
        #define POM_DM_STRONG          PIN_DM_STRONG
        #define POM_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define POM_MASK               POM__MASK
#define POM_SHIFT              POM__SHIFT
#define POM_WIDTH              1u

/* Interrupt constants */
#if defined(POM__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in POM_SetInterruptMode() function.
     *  @{
     */
        #define POM_INTR_NONE      (uint16)(0x0000u)
        #define POM_INTR_RISING    (uint16)(0x0001u)
        #define POM_INTR_FALLING   (uint16)(0x0002u)
        #define POM_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define POM_INTR_MASK      (0x01u) 
#endif /* (POM__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define POM_PS                     (* (reg8 *) POM__PS)
/* Data Register */
#define POM_DR                     (* (reg8 *) POM__DR)
/* Port Number */
#define POM_PRT_NUM                (* (reg8 *) POM__PRT) 
/* Connect to Analog Globals */                                                  
#define POM_AG                     (* (reg8 *) POM__AG)                       
/* Analog MUX bux enable */
#define POM_AMUX                   (* (reg8 *) POM__AMUX) 
/* Bidirectional Enable */                                                        
#define POM_BIE                    (* (reg8 *) POM__BIE)
/* Bit-mask for Aliased Register Access */
#define POM_BIT_MASK               (* (reg8 *) POM__BIT_MASK)
/* Bypass Enable */
#define POM_BYP                    (* (reg8 *) POM__BYP)
/* Port wide control signals */                                                   
#define POM_CTL                    (* (reg8 *) POM__CTL)
/* Drive Modes */
#define POM_DM0                    (* (reg8 *) POM__DM0) 
#define POM_DM1                    (* (reg8 *) POM__DM1)
#define POM_DM2                    (* (reg8 *) POM__DM2) 
/* Input Buffer Disable Override */
#define POM_INP_DIS                (* (reg8 *) POM__INP_DIS)
/* LCD Common or Segment Drive */
#define POM_LCD_COM_SEG            (* (reg8 *) POM__LCD_COM_SEG)
/* Enable Segment LCD */
#define POM_LCD_EN                 (* (reg8 *) POM__LCD_EN)
/* Slew Rate Control */
#define POM_SLW                    (* (reg8 *) POM__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define POM_PRTDSI__CAPS_SEL       (* (reg8 *) POM__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define POM_PRTDSI__DBL_SYNC_IN    (* (reg8 *) POM__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define POM_PRTDSI__OE_SEL0        (* (reg8 *) POM__PRTDSI__OE_SEL0) 
#define POM_PRTDSI__OE_SEL1        (* (reg8 *) POM__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define POM_PRTDSI__OUT_SEL0       (* (reg8 *) POM__PRTDSI__OUT_SEL0) 
#define POM_PRTDSI__OUT_SEL1       (* (reg8 *) POM__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define POM_PRTDSI__SYNC_OUT       (* (reg8 *) POM__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(POM__SIO_CFG)
    #define POM_SIO_HYST_EN        (* (reg8 *) POM__SIO_HYST_EN)
    #define POM_SIO_REG_HIFREQ     (* (reg8 *) POM__SIO_REG_HIFREQ)
    #define POM_SIO_CFG            (* (reg8 *) POM__SIO_CFG)
    #define POM_SIO_DIFF           (* (reg8 *) POM__SIO_DIFF)
#endif /* (POM__SIO_CFG) */

/* Interrupt Registers */
#if defined(POM__INTSTAT)
    #define POM_INTSTAT            (* (reg8 *) POM__INTSTAT)
    #define POM_SNAP               (* (reg8 *) POM__SNAP)
    
	#define POM_0_INTTYPE_REG 		(* (reg8 *) POM__0__INTTYPE)
#endif /* (POM__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_POM_H */


/* [] END OF FILE */
