/*
 * cslr_idma.h
 *
 * This file contains the macros for Register Chip Support Library (CSL) which 
 * can be used for operations on the respective underlying hardware/peripheral
 *
 * Copyright (C) 2009 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/


/** ============================================================================
 *   @file  cslr_idma.h
 *
 *   @path  $(CSLPATH)\inc
 *
 *   @desc  This file contains the Register Descriptions for IDMA
 *          Reference: User Guide SPRU871F
 *  ============================================================================
 */
#ifndef _CSLR_IDMA_H_
#define _CSLR_IDMA_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <ti/pspiom/cslr/cslr.h>
#include <ti/pspiom/cslr/tistdtypes.h>


/* Minimum unit = 1 byte */

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 IDMA0_STAT;
    volatile Uint32 IDMA0_MASK;
    volatile Uint32 IDMA0_SOURCE;
    volatile Uint32 IDMA0_DEST;
    volatile Uint32 IDMA0_COUNT;
    volatile Uint8 RSVD0[236];
    volatile Uint32 IDMA1_STAT;
    volatile Uint8 RSVD1[4];
    volatile Uint32 IDMA1_SOURCE;
    volatile Uint32 IDMA1_DEST;
    volatile Uint32 IDMA1_COUNT;
} CSL_IdmaRegs;

/**************************************************************************\
* Overlay structure typedef definition
\**************************************************************************/
typedef volatile CSL_IdmaRegs         *CSL_IdmaRegsOvly;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* IDMA0_STAT */


#define CSL_IDMA_IDMA0_STAT_PEND_MASK (0x00000002u)
#define CSL_IDMA_IDMA0_STAT_PEND_SHIFT (0x00000001u)
#define CSL_IDMA_IDMA0_STAT_PEND_RESETVAL (0x00000000u)
/*----PEND Tokens----*/
#define CSL_IDMA_IDMA0_STAT_PEND_NOPENDING (0x00000000u)
#define CSL_IDMA_IDMA0_STAT_PEND_PENDING (0x00000001u)

#define CSL_IDMA_IDMA0_STAT_ACTV_MASK (0x00000001u)
#define CSL_IDMA_IDMA0_STAT_ACTV_SHIFT (0x00000000u)
#define CSL_IDMA_IDMA0_STAT_ACTV_RESETVAL (0x00000000u)
/*----ACTV Tokens----*/
#define CSL_IDMA_IDMA0_STAT_ACTV_INACTIVE (0x00000000u)
#define CSL_IDMA_IDMA0_STAT_ACTV_ACTIVE (0x00000001u)

#define CSL_IDMA_IDMA0_STAT_RESETVAL (0x00000000u)

/* IDMA0_MASK */

#define CSL_IDMA_IDMA0_MASK_M31_MASK (0x80000000u)
#define CSL_IDMA_IDMA0_MASK_M31_SHIFT (0x0000001Fu)
#define CSL_IDMA_IDMA0_MASK_M31_RESETVAL (0x00000000u)
/*----M31 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M31_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M31_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M30_MASK (0x40000000u)
#define CSL_IDMA_IDMA0_MASK_M30_SHIFT (0x0000001Eu)
#define CSL_IDMA_IDMA0_MASK_M30_RESETVAL (0x00000000u)
/*----M30 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M30_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M30_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M29_MASK (0x20000000u)
#define CSL_IDMA_IDMA0_MASK_M29_SHIFT (0x0000001Du)
#define CSL_IDMA_IDMA0_MASK_M29_RESETVAL (0x00000000u)
/*----M29 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M29_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M29_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M28_MASK (0x10000000u)
#define CSL_IDMA_IDMA0_MASK_M28_SHIFT (0x0000001Cu)
#define CSL_IDMA_IDMA0_MASK_M28_RESETVAL (0x00000000u)
/*----M28 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M28_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M28_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M27_MASK (0x08000000u)
#define CSL_IDMA_IDMA0_MASK_M27_SHIFT (0x0000001Bu)
#define CSL_IDMA_IDMA0_MASK_M27_RESETVAL (0x00000000u)
/*----M27 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M27_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M27_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M26_MASK (0x04000000u)
#define CSL_IDMA_IDMA0_MASK_M26_SHIFT (0x0000001Au)
#define CSL_IDMA_IDMA0_MASK_M26_RESETVAL (0x00000000u)
/*----M26 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M26_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M26_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M25_MASK (0x02000000u)
#define CSL_IDMA_IDMA0_MASK_M25_SHIFT (0x00000019u)
#define CSL_IDMA_IDMA0_MASK_M25_RESETVAL (0x00000000u)
/*----M25 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M25_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M25_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M24_MASK (0x01000000u)
#define CSL_IDMA_IDMA0_MASK_M24_SHIFT (0x00000018u)
#define CSL_IDMA_IDMA0_MASK_M24_RESETVAL (0x00000000u)
/*----M24 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M24_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M24_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M23_MASK (0x00800000u)
#define CSL_IDMA_IDMA0_MASK_M23_SHIFT (0x00000017u)
#define CSL_IDMA_IDMA0_MASK_M23_RESETVAL (0x00000000u)
/*----M23 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M23_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M23_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M22_MASK (0x00400000u)
#define CSL_IDMA_IDMA0_MASK_M22_SHIFT (0x00000016u)
#define CSL_IDMA_IDMA0_MASK_M22_RESETVAL (0x00000000u)
/*----M22 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M22_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M22_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M21_MASK (0x00200000u)
#define CSL_IDMA_IDMA0_MASK_M21_SHIFT (0x00000015u)
#define CSL_IDMA_IDMA0_MASK_M21_RESETVAL (0x00000000u)
/*----M21 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M21_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M21_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M20_MASK (0x00100000u)
#define CSL_IDMA_IDMA0_MASK_M20_SHIFT (0x00000014u)
#define CSL_IDMA_IDMA0_MASK_M20_RESETVAL (0x00000000u)
/*----M20 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M20_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M20_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M19_MASK (0x00080000u)
#define CSL_IDMA_IDMA0_MASK_M19_SHIFT (0x00000013u)
#define CSL_IDMA_IDMA0_MASK_M19_RESETVAL (0x00000000u)
/*----M19 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M19_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M19_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M18_MASK (0x00040000u)
#define CSL_IDMA_IDMA0_MASK_M18_SHIFT (0x00000012u)
#define CSL_IDMA_IDMA0_MASK_M18_RESETVAL (0x00000000u)
/*----M18 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M18_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M18_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M17_MASK (0x00020000u)
#define CSL_IDMA_IDMA0_MASK_M17_SHIFT (0x00000011u)
#define CSL_IDMA_IDMA0_MASK_M17_RESETVAL (0x00000000u)
/*----M17 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M17_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M17_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M16_MASK (0x00010000u)
#define CSL_IDMA_IDMA0_MASK_M16_SHIFT (0x00000010u)
#define CSL_IDMA_IDMA0_MASK_M16_RESETVAL (0x00000000u)
/*----M16 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M16_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M16_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M15_MASK (0x00008000u)
#define CSL_IDMA_IDMA0_MASK_M15_SHIFT (0x0000000Fu)
#define CSL_IDMA_IDMA0_MASK_M15_RESETVAL (0x00000000u)
/*----M15 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M15_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M15_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M14_MASK (0x00004000u)
#define CSL_IDMA_IDMA0_MASK_M14_SHIFT (0x0000000Eu)
#define CSL_IDMA_IDMA0_MASK_M14_RESETVAL (0x00000000u)
/*----M14 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M14_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M14_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M13_MASK (0x00002000u)
#define CSL_IDMA_IDMA0_MASK_M13_SHIFT (0x0000000Du)
#define CSL_IDMA_IDMA0_MASK_M13_RESETVAL (0x00000000u)
/*----M13 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M13_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M13_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M12_MASK (0x00001000u)
#define CSL_IDMA_IDMA0_MASK_M12_SHIFT (0x0000000Cu)
#define CSL_IDMA_IDMA0_MASK_M12_RESETVAL (0x00000000u)
/*----M12 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M12_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M12_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M11_MASK (0x00000800u)
#define CSL_IDMA_IDMA0_MASK_M11_SHIFT (0x0000000Bu)
#define CSL_IDMA_IDMA0_MASK_M11_RESETVAL (0x00000000u)
/*----M11 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M11_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M11_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M10_MASK (0x00000400u)
#define CSL_IDMA_IDMA0_MASK_M10_SHIFT (0x0000000Au)
#define CSL_IDMA_IDMA0_MASK_M10_RESETVAL (0x00000000u)
/*----M10 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M10_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M10_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M9_MASK (0x00000200u)
#define CSL_IDMA_IDMA0_MASK_M9_SHIFT (0x00000009u)
#define CSL_IDMA_IDMA0_MASK_M9_RESETVAL (0x00000000u)
/*----M9 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M9_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M9_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M8_MASK (0x00000100u)
#define CSL_IDMA_IDMA0_MASK_M8_SHIFT (0x00000008u)
#define CSL_IDMA_IDMA0_MASK_M8_RESETVAL (0x00000000u)
/*----M8 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M8_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M8_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M7_MASK (0x00000080u)
#define CSL_IDMA_IDMA0_MASK_M7_SHIFT (0x00000007u)
#define CSL_IDMA_IDMA0_MASK_M7_RESETVAL (0x00000000u)
/*----M7 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M7_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M7_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M6_MASK (0x00000040u)
#define CSL_IDMA_IDMA0_MASK_M6_SHIFT (0x00000006u)
#define CSL_IDMA_IDMA0_MASK_M6_RESETVAL (0x00000000u)
/*----M6 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M6_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M6_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M5_MASK (0x00000020u)
#define CSL_IDMA_IDMA0_MASK_M5_SHIFT (0x00000005u)
#define CSL_IDMA_IDMA0_MASK_M5_RESETVAL (0x00000000u)
/*----M5 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M5_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M5_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M4_MASK (0x00000010u)
#define CSL_IDMA_IDMA0_MASK_M4_SHIFT (0x00000004u)
#define CSL_IDMA_IDMA0_MASK_M4_RESETVAL (0x00000000u)
/*----M4 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M4_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M4_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M3_MASK (0x00000008u)
#define CSL_IDMA_IDMA0_MASK_M3_SHIFT (0x00000003u)
#define CSL_IDMA_IDMA0_MASK_M3_RESETVAL (0x00000000u)
/*----M3 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M3_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M3_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M2_MASK (0x00000004u)
#define CSL_IDMA_IDMA0_MASK_M2_SHIFT (0x00000002u)
#define CSL_IDMA_IDMA0_MASK_M2_RESETVAL (0x00000000u)
/*----M2 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M2_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M2_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M1_MASK (0x00000002u)
#define CSL_IDMA_IDMA0_MASK_M1_SHIFT (0x00000001u)
#define CSL_IDMA_IDMA0_MASK_M1_RESETVAL (0x00000000u)
/*----M1 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M1_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M1_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_M0_MASK (0x00000001u)
#define CSL_IDMA_IDMA0_MASK_M0_SHIFT (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M0_RESETVAL (0x00000000u)
/*----M0 Tokens----*/
#define CSL_IDMA_IDMA0_MASK_M0_NOTMASKED (0x00000000u)
#define CSL_IDMA_IDMA0_MASK_M0_MASKED (0x00000001u)

#define CSL_IDMA_IDMA0_MASK_RESETVAL (0x00000000u)

/* IDMA0_SOURCE */

#define CSL_IDMA_IDMA0_SOURCE_SOURCEADDR_MASK (0xFFFFFFE0u)
#define CSL_IDMA_IDMA0_SOURCE_SOURCEADDR_SHIFT (0x00000005u)
#define CSL_IDMA_IDMA0_SOURCE_SOURCEADDR_RESETVAL (0x00000000u)


#define CSL_IDMA_IDMA0_SOURCE_RESETVAL (0x00000000u)

/* IDMA0_DEST */

#define CSL_IDMA_IDMA0_DEST_DESTADDR_MASK (0xFFFFFFE0u)
#define CSL_IDMA_IDMA0_DEST_DESTADDR_SHIFT (0x00000005u)
#define CSL_IDMA_IDMA0_DEST_DESTADDR_RESETVAL (0x00000000u)


#define CSL_IDMA_IDMA0_DEST_RESETVAL (0x00000000u)

/* IDMA0_COUNT */


#define CSL_IDMA_IDMA0_COUNT_INT_MASK (0x10000000u)
#define CSL_IDMA_IDMA0_COUNT_INT_SHIFT (0x0000001Cu)
#define CSL_IDMA_IDMA0_COUNT_INT_RESETVAL (0x00000000u)
/*----INT Tokens----*/
#define CSL_IDMA_IDMA0_COUNT_INT_NOINT (0x00000000u)
#define CSL_IDMA_IDMA0_COUNT_INT_INT (0x00000001u)


#define CSL_IDMA_IDMA0_COUNT_COUNT_MASK (0x0000000Fu)
#define CSL_IDMA_IDMA0_COUNT_COUNT_SHIFT (0x00000000u)
#define CSL_IDMA_IDMA0_COUNT_COUNT_RESETVAL (0x00000000u)

#define CSL_IDMA_IDMA0_COUNT_RESETVAL (0x00000000u)

/* IDMA1_STAT */


#define CSL_IDMA_IDMA1_STAT_PEND_MASK (0x00000002u)
#define CSL_IDMA_IDMA1_STAT_PEND_SHIFT (0x00000001u)
#define CSL_IDMA_IDMA1_STAT_PEND_RESETVAL (0x00000000u)
/*----PEND Tokens----*/
#define CSL_IDMA_IDMA1_STAT_PEND_NOPEND (0x00000000u)
#define CSL_IDMA_IDMA1_STAT_PEND_PEND (0x00000001u)

#define CSL_IDMA_IDMA1_STAT_ACTV_MASK (0x00000001u)
#define CSL_IDMA_IDMA1_STAT_ACTV_SHIFT (0x00000000u)
#define CSL_IDMA_IDMA1_STAT_ACTV_RESETVAL (0x00000000u)
/*----ACTV Tokens----*/
#define CSL_IDMA_IDMA1_STAT_ACTV_INACTIVE (0x00000000u)
#define CSL_IDMA_IDMA1_STAT_ACTV_ACTIVE (0x00000001u)

#define CSL_IDMA_IDMA1_STAT_RESETVAL (0x00000000u)

/* IDMA1_SOURCE */

#define CSL_IDMA_IDMA1_SOURCE_SOURCEADDR_MASK (0xFFFFFFFFu)
#define CSL_IDMA_IDMA1_SOURCE_SOURCEADDR_SHIFT (0x00000000u)
#define CSL_IDMA_IDMA1_SOURCE_SOURCEADDR_RESETVAL (0x00000000u)
#define CSL_IDMA_IDMA1_SOURCE_SOURCEADDR_ZEROFILL (0x00000000u)

#define CSL_IDMA_IDMA1_SOURCE_RESETVAL (0x00000000u)

/* IDMA1_DEST */

#define CSL_IDMA_IDMA1_DEST_DESTADDR_MASK (0xFFFFFFFCu)
#define CSL_IDMA_IDMA1_DEST_DESTADDR_SHIFT (0x00000002u)
#define CSL_IDMA_IDMA1_DEST_DESTADDR_RESETVAL (0x00000000u)


#define CSL_IDMA_IDMA1_DEST_RESETVAL (0x00000000u)

/* IDMA1_COUNT */

#define CSL_IDMA_IDMA1_COUNT_PRI_MASK (0xE0000000u)
#define CSL_IDMA_IDMA1_COUNT_PRI_SHIFT (0x0000001Du)
#define CSL_IDMA_IDMA1_COUNT_PRI_RESETVAL (0x00000000u)
#define CSL_IDMA_IDMA1_COUNT_PRI_PRI0 (0x00000000u)
#define CSL_IDMA_IDMA1_COUNT_PRI_PRI1 (0x00000001u)
#define CSL_IDMA_IDMA1_COUNT_PRI_PRI2 (0x00000002u)
#define CSL_IDMA_IDMA1_COUNT_PRI_PRI3 (0x00000003u)
#define CSL_IDMA_IDMA1_COUNT_PRI_PRI4 (0x00000004u)
#define CSL_IDMA_IDMA1_COUNT_PRI_PRI5 (0x00000005u)
#define CSL_IDMA_IDMA1_COUNT_PRI_PRI6 (0x00000006u)
#define CSL_IDMA_IDMA1_COUNT_PRI_PRI7 (0x00000007u)

#define CSL_IDMA_IDMA1_COUNT_INT_MASK (0x10000000u)
#define CSL_IDMA_IDMA1_COUNT_INT_SHIFT (0x0000001Cu)
#define CSL_IDMA_IDMA1_COUNT_INT_RESETVAL (0x00000000u)
/*----INT Tokens----*/
#define CSL_IDMA_IDMA1_COUNT_INT_NOINT (0x00000001u)
#define CSL_IDMA_IDMA1_COUNT_INT_INT (0x00000000u)


#define CSL_IDMA_IDMA1_COUNT_FILL_MASK (0x00010000u)
#define CSL_IDMA_IDMA1_COUNT_FILL_SHIFT (0x00000010u)
#define CSL_IDMA_IDMA1_COUNT_FILL_RESETVAL (0x00000000u)
/*----FILL Tokens----*/
#define CSL_IDMA_IDMA1_COUNT_FILL_FILL (0x00000001u)
#define CSL_IDMA_IDMA1_COUNT_FILL_XFER (0x00000000u)

#define CSL_IDMA_IDMA1_COUNT_COUNT_MASK (0x0000FFFFu)
#define CSL_IDMA_IDMA1_COUNT_COUNT_SHIFT (0x00000000u)
#define CSL_IDMA_IDMA1_COUNT_COUNT_RESETVAL (0x00000000u)

#define CSL_IDMA_IDMA1_COUNT_RESETVAL (0x00000000u)

#ifdef __cplusplus
}
#endif

#endif

