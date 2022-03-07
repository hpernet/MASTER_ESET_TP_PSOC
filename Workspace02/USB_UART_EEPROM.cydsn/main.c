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
#include <stdio.h>

// Define
#define EEPROM_BASE_ADDRESS 0x40008000

// 
int val        = 0;
int increment  = 1; 
char valeur[8] = {0};

int main()
{
    //-----------------------//
    //   START ALL MODULES   //
    //-----------------------//
    CyGlobalIntEnable; /* Enable global interrupts. */

    // Start UART
    USBUART_1_Start(0, USBUART_1_5V_OPERATION);
    while(0 == USBUART_1_GetConfiguration())
    {
    }
    USBUART_1_CDC_Init();
    
    // Start EEPROM
    EEPROM_1_Start();

    //-----------------------//
    //    INITIALIZATION     //
    //-----------------------//
    // EEPROM Initialization
    for uint8_t iBcl = 0; iBcl < 4; iB 
    EEPROM_1_WriteByte(12, 0x01);
    EEPROM_1_WriteByte(25, 0x02);
    EEPROM_1_WriteByte(36, 0x03);

    //-----------------------//
    //     INIFINIT LOOP     //
    //-----------------------//
    for(;;)
    {
        /* Place your application code here. */
        CyDelay(990);
        
        //Read EEPROM value
        val = EEPROM_1_ReadByte(0x01);
        
        // Print on UART
        sprintf(valeur, "%d", val);
        USBUART_1_PutString(valeur);
        CyDelay(10);
        USBUART_1_PutCRLF();
        
        CyDelay(990);
        
        //Read EEPROM value
        val = EEPROM_1_ReadByte(0x02);
        
        // Print on UART
        sprintf(valeur, "%d", val);
        USBUART_1_PutString(valeur);
        CyDelay(10);
        USBUART_1_PutCRLF();
        
        CyDelay(990);
        
        //Read EEPROM value
        val = EEPROM_1_ReadByte(0x03);
        
        // Print on UART
        sprintf(valeur, "%d", val);
        USBUART_1_PutString(valeur);
        CyDelay(10);
        USBUART_1_PutCRLF();
    }
}

/* [] END OF FILE */
