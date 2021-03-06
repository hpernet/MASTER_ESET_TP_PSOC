#include "Filter_1.h"
#include "Filter_1_PVT.h"

const uint8 CYCODE Filter_1_control[] = 
{
    0x20u, 0x13u, 0x00u, 0x25u, 0x61u, 0x17u, 0x80u, 0x26u,
    0x01u, 0x00u, 0x80u, 0x26u, 0xE0u, 0x0Eu, 0x80u, 0x26u,
    0xC2u, 0x0Cu, 0x80u, 0x26u, 0x02u, 0x00u, 0x80u, 0x06u,
    0x65u, 0x87u, 0x18u, 0x6Du, 0x64u, 0x09u, 0x18u, 0x3Eu,
    0x00u, 0x00u, 0x80u, 0x26u, 0x03u, 0x20u, 0x80u, 0x26u,
    0x21u, 0x02u, 0x18u, 0x7Fu, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
   };

const uint8 CYCODE Filter_1_data_a[] = 
{
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
   };

const uint8 CYCODE Filter_1_data_b[] = 
{
    0x56u, 0xFFu, 0xFFu, 0x00u, 0x50u, 0xFFu, 0xFFu, 0x00u,
    0x3Fu, 0xFFu, 0xFFu, 0x00u, 0x26u, 0xFFu, 0xFFu, 0x00u,
    0x07u, 0xFFu, 0xFFu, 0x00u, 0xE5u, 0xFEu, 0xFFu, 0x00u,
    0xC3u, 0xFEu, 0xFFu, 0x00u, 0xA7u, 0xFEu, 0xFFu, 0x00u,
    0x95u, 0xFEu, 0xFFu, 0x00u, 0x92u, 0xFEu, 0xFFu, 0x00u,
    0xA5u, 0xFEu, 0xFFu, 0x00u, 0xD4u, 0xFEu, 0xFFu, 0x00u,
    0x29u, 0xFFu, 0xFFu, 0x00u, 0xABu, 0xFFu, 0xFFu, 0x00u,
    0x64u, 0x00u, 0x00u, 0x00u, 0x60u, 0x01u, 0x00u, 0x00u,
    0xAAu, 0x02u, 0x00u, 0x00u, 0x4Fu, 0x04u, 0x00u, 0x00u,
    0x5Bu, 0x06u, 0x00u, 0x00u, 0xDDu, 0x08u, 0x00u, 0x00u,
    0xE3u, 0x0Bu, 0x00u, 0x00u, 0x7Du, 0x0Fu, 0x00u, 0x00u,
    0xB8u, 0x13u, 0x00u, 0x00u, 0xA6u, 0x18u, 0x00u, 0x00u,
    0x54u, 0x1Eu, 0x00u, 0x00u, 0xD1u, 0x24u, 0x00u, 0x00u,
    0x2Cu, 0x2Cu, 0x00u, 0x00u, 0x71u, 0x34u, 0x00u, 0x00u,
    0xACu, 0x3Du, 0x00u, 0x00u, 0xE8u, 0x47u, 0x00u, 0x00u,
    0x2Du, 0x53u, 0x00u, 0x00u, 0x82u, 0x5Fu, 0x00u, 0x00u,
    0xEAu, 0x6Cu, 0x00u, 0x00u, 0x68u, 0x7Bu, 0x00u, 0x00u,
    0xFBu, 0x8Au, 0x00u, 0x00u, 0x9Eu, 0x9Bu, 0x00u, 0x00u,
    0x4Bu, 0xADu, 0x00u, 0x00u, 0xF6u, 0xBFu, 0x00u, 0x00u,
    0x93u, 0xD3u, 0x00u, 0x00u, 0x11u, 0xE8u, 0x00u, 0x00u,
    0x5Au, 0xFDu, 0x00u, 0x00u, 0x57u, 0x13u, 0x01u, 0x00u,
    0xEEu, 0x29u, 0x01u, 0x00u, 0x00u, 0x41u, 0x01u, 0x00u,
    0x6Du, 0x58u, 0x01u, 0x00u, 0x12u, 0x70u, 0x01u, 0x00u,
    0xC9u, 0x87u, 0x01u, 0x00u, 0x6Bu, 0x9Fu, 0x01u, 0x00u,
    0xCEu, 0xB6u, 0x01u, 0x00u, 0xCAu, 0xCDu, 0x01u, 0x00u,
    0x34u, 0xE4u, 0x01u, 0x00u, 0xE0u, 0xF9u, 0x01u, 0x00u,
    0xA5u, 0x0Eu, 0x02u, 0x00u, 0x59u, 0x22u, 0x02u, 0x00u,
    0xD4u, 0x34u, 0x02u, 0x00u, 0xEFu, 0x45u, 0x02u, 0x00u,
    0x87u, 0x55u, 0x02u, 0x00u, 0x7Au, 0x63u, 0x02u, 0x00u,
    0xAAu, 0x6Fu, 0x02u, 0x00u, 0xFDu, 0x79u, 0x02u, 0x00u,
    0x5Bu, 0x82u, 0x02u, 0x00u, 0xB2u, 0x88u, 0x02u, 0x00u,
    0xF4u, 0x8Cu, 0x02u, 0x00u, 0x17u, 0x8Fu, 0x02u, 0x00u,
    0x17u, 0x8Fu, 0x02u, 0x00u, 0xF4u, 0x8Cu, 0x02u, 0x00u,
    0xB2u, 0x88u, 0x02u, 0x00u, 0x5Bu, 0x82u, 0x02u, 0x00u,
    0xFDu, 0x79u, 0x02u, 0x00u, 0xAAu, 0x6Fu, 0x02u, 0x00u,
    0x7Au, 0x63u, 0x02u, 0x00u, 0x87u, 0x55u, 0x02u, 0x00u,
    0xEFu, 0x45u, 0x02u, 0x00u, 0xD4u, 0x34u, 0x02u, 0x00u,
    0x59u, 0x22u, 0x02u, 0x00u, 0xA5u, 0x0Eu, 0x02u, 0x00u,
    0xE0u, 0xF9u, 0x01u, 0x00u, 0x34u, 0xE4u, 0x01u, 0x00u,
    0xCAu, 0xCDu, 0x01u, 0x00u, 0xCEu, 0xB6u, 0x01u, 0x00u,
    0x6Bu, 0x9Fu, 0x01u, 0x00u, 0xC9u, 0x87u, 0x01u, 0x00u,
    0x12u, 0x70u, 0x01u, 0x00u, 0x6Du, 0x58u, 0x01u, 0x00u,
    0x00u, 0x41u, 0x01u, 0x00u, 0xEEu, 0x29u, 0x01u, 0x00u,
    0x57u, 0x13u, 0x01u, 0x00u, 0x5Au, 0xFDu, 0x00u, 0x00u,
    0x11u, 0xE8u, 0x00u, 0x00u, 0x93u, 0xD3u, 0x00u, 0x00u,
    0xF6u, 0xBFu, 0x00u, 0x00u, 0x4Bu, 0xADu, 0x00u, 0x00u,
    0x9Eu, 0x9Bu, 0x00u, 0x00u, 0xFBu, 0x8Au, 0x00u, 0x00u,
    0x68u, 0x7Bu, 0x00u, 0x00u, 0xEAu, 0x6Cu, 0x00u, 0x00u,
    0x82u, 0x5Fu, 0x00u, 0x00u, 0x2Du, 0x53u, 0x00u, 0x00u,
    0xE8u, 0x47u, 0x00u, 0x00u, 0xACu, 0x3Du, 0x00u, 0x00u,
    0x71u, 0x34u, 0x00u, 0x00u, 0x2Cu, 0x2Cu, 0x00u, 0x00u,
    0xD1u, 0x24u, 0x00u, 0x00u, 0x54u, 0x1Eu, 0x00u, 0x00u,
    0xA6u, 0x18u, 0x00u, 0x00u, 0xB8u, 0x13u, 0x00u, 0x00u,
    0x7Du, 0x0Fu, 0x00u, 0x00u, 0xE3u, 0x0Bu, 0x00u, 0x00u,
    0xDDu, 0x08u, 0x00u, 0x00u, 0x5Bu, 0x06u, 0x00u, 0x00u,
    0x4Fu, 0x04u, 0x00u, 0x00u, 0xAAu, 0x02u, 0x00u, 0x00u,
    0x60u, 0x01u, 0x00u, 0x00u, 0x64u, 0x00u, 0x00u, 0x00u,
    0xABu, 0xFFu, 0xFFu, 0x00u, 0x29u, 0xFFu, 0xFFu, 0x00u,
    0xD4u, 0xFEu, 0xFFu, 0x00u, 0xA5u, 0xFEu, 0xFFu, 0x00u,
    0x92u, 0xFEu, 0xFFu, 0x00u, 0x95u, 0xFEu, 0xFFu, 0x00u,
    0xA7u, 0xFEu, 0xFFu, 0x00u, 0xC3u, 0xFEu, 0xFFu, 0x00u,
    0xE5u, 0xFEu, 0xFFu, 0x00u, 0x07u, 0xFFu, 0xFFu, 0x00u,
    0x26u, 0xFFu, 0xFFu, 0x00u, 0x3Fu, 0xFFu, 0xFFu, 0x00u,
    0x50u, 0xFFu, 0xFFu, 0x00u, 0x56u, 0xFFu, 0xFFu, 0x00u,
   };

const uint8 CYCODE Filter_1_acu[] = 
{
    0xFFu, 0x3Fu, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
   };

const uint8 CYCODE Filter_1_cfsm[] = 
{
    0x21u, 0xF8u, 0x05u, 0x01u, 0x42u, 0x10u, 0x86u, 0x40u,
    0x64u, 0xF8u, 0x15u, 0x01u, 0x81u, 0xF8u, 0x05u, 0x01u,
    0x43u, 0x51u, 0x8Eu, 0x21u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
   };

