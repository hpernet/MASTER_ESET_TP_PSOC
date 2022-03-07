/*******************************************************************************
* File Name: POH.h  
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

#if !defined(CY_PINS_POH_H) /* Pins POH_H */
#define CY_PINS_POH_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "POH_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 POH__PORT == 15 && ((POH__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    POH_Write(uint8 value);
void    POH_SetDriveMode(uint8 mode);
uint8   POH_ReadDataReg(void);
uint8   POH_Read(void);
void    POH_SetInterruptMode(uint16 position, uint16 mode);
uint8   POH_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the POH_SetDriveMode() function.
     *  @{
     */
        #define POH_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define POH_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define POH_DM_RES_UP          PIN_DM_RES_UP
        #define POH_DM_RES_DWN         PIN_DM_RES_DWN
        #define POH_DM_OD_LO           PIN_DM_OD_LO
        #define POH_DM_OD_HI           PIN_DM_OD_HI
        #define POH_DM_STRONG          PIN_DM_STRONG
        #define POH_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define POH_MASK               POH__MASK
#define POH_SHIFT              POH__SHIFT
#define POH_WIDTH              1u

/* Interrupt constants */
#if defined(POH__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in POH_SetInterruptMode() function.
     *  @{
     */
        #define POH_INTR_NONE      (uint16)(0x0000u)
        #define POH_INTR_RISING    (uint16)(0x0001u)
        #define POH_INTR_FALLING   (uint16)(0x0002u)
        #define POH_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define POH_INTR_MASK      (0x01u) 
#endif /* (POH__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define POH_PS                     (* (reg8 *) POH__PS)
/* Data Register */
#define POH_DR                     (* (reg8 *) POH__DR)
/* Port Number */
#define POH_PRT_NUM                (* (reg8 *) POH__PRT) 
/* Connect to Analog Globals */                                                  
#define POH_AG                     (* (reg8 *) POH__AG)                       
/* Analog MUX bux enable */
#define POH_AMUX                   (* (reg8 *) POH__AMUX) 
/* Bidirectional Enable */                                                        
#define POH_BIE                    (* (reg8 *) POH__BIE)
/* Bit-mask for Aliased Register Access */
#define POH_BIT_MASK               (* (reg8 *) POH__BIT_MASK)
/* Bypass Enable */
#define POH_BYP                    (* (reg8 *) POH__BYP)
/* Port wide control signals */                                                   
#define POH_CTL                    (* (reg8 *) POH__CTL)
/* Drive Modes */
#define POH_DM0                    (* (reg8 *) POH__DM0) 
#define POH_DM1                    (* (reg8 *) POH__DM1)
#define POH_DM2                    (* (reg8 *) POH__DM2) 
/* Input Buffer Disable Override */
#define POH_INP_DIS                (* (reg8 *) POH__INP_DIS)
/* LCD Common or Segment Drive */
#define POH_LCD_COM_SEG            (* (reg8 *) POH__LCD_COM_SEG)
/* Enable Segment LCD */
#define POH_LCD_EN                 (* (reg8 *) POH__LCD_EN)
/* Slew Rate Control */
#define POH_SLW                    (* (reg8 *) POH__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define POH_PRTDSI__CAPS_SEL       (* (reg8 *) POH__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define POH_PRTDSI__DBL_SYNC_IN    (* (reg8 *) POH__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define POH_PRTDSI__OE_SEL0        (* (reg8 *) POH__PRTDSI__OE_SEL0) 
#define POH_PRTDSI__OE_SEL1        (* (reg8 *) POH__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define POH_PRTDSI__OUT_SEL0       (* (reg8 *) POH__PRTDSI__OUT_SEL0) 
#define POH_PRTDSI__OUT_SEL1       (* (reg8 *) POH__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define POH_PRTDSI__SYNC_OUT       (* (reg8 *) POH__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(POH__SIO_CFG)
    #define POH_SIO_HYST_EN        (* (reg8 *) POH__SIO_HYST_EN)
    #define POH_SIO_REG_HIFREQ     (* (reg8 *) POH__SIO_REG_HIFREQ)
    #define POH_SIO_CFG            (* (reg8 *) POH__SIO_CFG)
    #define POH_SIO_DIFF           (* (reg8 *) POH__SIO_DIFF)
#endif /* (POH__SIO_CFG) */

/* Interrupt Registers */
#if defined(POH__INTSTAT)
    #define POH_INTSTAT            (* (reg8 *) POH__INTSTAT)
    #define POH_SNAP               (* (reg8 *) POH__SNAP)
    
	#define POH_0_INTTYPE_REG 		(* (reg8 *) POH__0__INTTYPE)
#endif /* (POH__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_POH_H */


/* [] END OF FILE */
