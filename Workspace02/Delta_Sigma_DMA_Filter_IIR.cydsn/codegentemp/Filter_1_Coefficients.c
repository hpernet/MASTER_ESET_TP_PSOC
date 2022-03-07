#include "Filter_1.h"
#include "Filter_1_PVT.h"


/*******************************************************************************
* ChannelA filter coefficients.
* Filter Type is: Biquad
*******************************************************************************/

/* Renamed array for backward compatibility.
*  Should not be used in new designs.
*/
#define ChannelABiquadCoefficients Filter_1_ChannelABiquadCoefficients

/* Number of Biquad sections are: 4 */

const uint8 CYCODE Filter_1_ChannelABiquadCoefficients[Filter_1_BIQUAD_A_SIZE] = 
{
 /* Coefficients of Section 0 */
 0xCCu, 0x0Bu, 0x00u, 0x00u, /* Section(0)_A0, 0.000720024108886719 */

 0x99u, 0x17u, 0x00u, 0x00u, /* Section(0)_A1, 0.00144028663635254 */

 0xCCu, 0x0Bu, 0x00u, 0x00u, /* Section(0)_A2, 0.000720024108886719 */

 0x4Eu, 0x9Au, 0x77u, 0x00u, /* Section(0)_B1, -1.86879301071167 */

 0x53u, 0x97u, 0xC7u, 0x00u, /* Section(0)_B2, 0.881388902664185 */

 /* Coefficients of Section 1 */
 0x6Bu, 0x3Fu, 0x00u, 0x00u, /* Section(1)_A0, 0.00387072563171387 */

 0xD6u, 0x7Eu, 0x00u, 0x00u, /* Section(1)_A1, 0.00774145126342773 */

 0x6Bu, 0x3Fu, 0x00u, 0x00u, /* Section(1)_A2, 0.00387072563171387 */

 0x2Du, 0x70u, 0x79u, 0x00u, /* Section(1)_B1, -1.89747166633606 */

 0x8Fu, 0x29u, 0xC5u, 0x00u, /* Section(1)_B2, 0.919338464736938 */

 /* Coefficients of Section 2 */
 0x8Fu, 0x27u, 0x00u, 0x00u, /* Section(2)_A0, 0.00241446495056152 */

 0x1Fu, 0x4Fu, 0x00u, 0x00u, /* Section(2)_A1, 0.00482916831970215 */

 0x8Fu, 0x27u, 0x00u, 0x00u, /* Section(2)_A2, 0.00241446495056152 */

 0xDCu, 0xB9u, 0x76u, 0x00u, /* Section(2)_B1, -1.85509395599365 */

 0xAFu, 0xDFu, 0xC8u, 0x00u, /* Section(2)_B2, 0.861347436904907 */

 /* Coefficients of Section 3 */
 0x0Fu, 0xDAu, 0x01u, 0x00u, /* Section(3)_A0, 0.0289342403411865 */

 0x1Du, 0xB4u, 0x03u, 0x00u, /* Section(3)_A1, 0.0578682422637939 */

 0x0Fu, 0xDAu, 0x01u, 0x00u, /* Section(3)_A2, 0.0289342403411865 */

 0x80u, 0x49u, 0x7Cu, 0x00u, /* Section(3)_B1, -1.94198608398438 */

 0xC2u, 0xDBu, 0xC1u, 0x00u, /* Section(3)_B2, 0.970962047576904 */
};

