/*
 * Copyright (c) 2013, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_LPTMR_REGISTERS_H__
#define __HW_LPTMR_REGISTERS_H__

#include "regs.h"

/*
 * K70 LPTMR
 *
 * Low Power Timer
 *
 * Registers defined in this header file:
 * - HW_LPTMR_CSR - Low Power Timer Control Status Register
 * - HW_LPTMR_PSR - Low Power Timer Prescale Register
 * - HW_LPTMR_CMR - Low Power Timer Compare Register
 * - HW_LPTMR_CNR - Low Power Timer Counter Register
 *
 * - hw_lptmr_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_LPTMR_BASE
#define HW_LPTMR_INSTANCE_COUNT (1U) //!< Number of instances of the LPTMR module.
#define REGS_LPTMR_BASE (0x40040000U) //!< Base address for LPTMR.
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_LPTMR_CSR - Low Power Timer Control Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_LPTMR_CSR - Low Power Timer Control Status Register (RW)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_lptmr_csr
{
    uint32_t U;
    struct _hw_lptmr_csr_bitfields
    {
        uint32_t TEN : 1; //!< [0] Timer Enable
        uint32_t TMS : 1; //!< [1] Timer Mode Select
        uint32_t TFC : 1; //!< [2] Timer Free-Running Counter
        uint32_t TPP : 1; //!< [3] Timer Pin Polarity
        uint32_t TPS : 2; //!< [5:4] Timer Pin Select
        uint32_t TIE : 1; //!< [6] Timer Interrupt Enable
        uint32_t TCF : 1; //!< [7] Timer Compare Flag
        uint32_t RESERVED0 : 24; //!< [31:8] 
    } B;
} hw_lptmr_csr_t;
#endif

/*!
 * @name Constants and macros for entire LPTMR_CSR register
 */
//@{
#define HW_LPTMR_CSR_ADDR      (REGS_LPTMR_BASE + 0x0U)

#ifndef __LANGUAGE_ASM__
#define HW_LPTMR_CSR           (*(__IO hw_lptmr_csr_t *) HW_LPTMR_CSR_ADDR)
#define HW_LPTMR_CSR_RD()      (HW_LPTMR_CSR.U)
#define HW_LPTMR_CSR_WR(v)     (HW_LPTMR_CSR.U = (v))
#define HW_LPTMR_CSR_SET(v)    (HW_LPTMR_CSR_WR(HW_LPTMR_CSR_RD() |  (v)))
#define HW_LPTMR_CSR_CLR(v)    (HW_LPTMR_CSR_WR(HW_LPTMR_CSR_RD() & ~(v)))
#define HW_LPTMR_CSR_TOG(v)    (HW_LPTMR_CSR_WR(HW_LPTMR_CSR_RD() ^  (v)))
#endif
//@}

/*
 * constants & macros for individual LPTMR_CSR bitfields
 */

/*! @name Register LPTMR_CSR, field TEN[0] (RW)
 *
 * When TEN is clear, it resets the LPTMR internal logic, including the CNR and TCF. When TEN is
 * set, the LPTMR is enabled. While writing 1 to this field, CSR[5:1] must not be altered.
 *
 * Values:
 * - 0 - LPTMR is disabled and internal logic is reset.
 * - 1 - LPTMR is enabled.
 */
//@{
#define BP_LPTMR_CSR_TEN      (0U)      //!< Bit position for LPTMR_CSR_TEN.
#define BM_LPTMR_CSR_TEN      (0x00000001U)  //!< Bit mask for LPTMR_CSR_TEN.
#define BS_LPTMR_CSR_TEN      (1U)  //!< Bitfield size in bits for LPTMR_CSR_TEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_CSR_TEN field.
#define BR_LPTMR_CSR_TEN()   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TEN))
#endif

//! @brief Format value for bitfield LPTMR_CSR_TEN.
#define BF_LPTMR_CSR_TEN(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_CSR_TEN), uint32_t) & BM_LPTMR_CSR_TEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TEN field to a new value.
#define BW_LPTMR_CSR_TEN(v)   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TEN) = (v))
#endif
//@}

/*! @name Register LPTMR_CSR, field TMS[1] (RW)
 *
 * Configures the mode of the LPTMR. TMS must be altered only when the LPTMR is disabled.
 *
 * Values:
 * - 0 - Time Counter mode.
 * - 1 - Pulse Counter mode.
 */
//@{
#define BP_LPTMR_CSR_TMS      (1U)      //!< Bit position for LPTMR_CSR_TMS.
#define BM_LPTMR_CSR_TMS      (0x00000002U)  //!< Bit mask for LPTMR_CSR_TMS.
#define BS_LPTMR_CSR_TMS      (1U)  //!< Bitfield size in bits for LPTMR_CSR_TMS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_CSR_TMS field.
#define BR_LPTMR_CSR_TMS()   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TMS))
#endif

//! @brief Format value for bitfield LPTMR_CSR_TMS.
#define BF_LPTMR_CSR_TMS(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_CSR_TMS), uint32_t) & BM_LPTMR_CSR_TMS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TMS field to a new value.
#define BW_LPTMR_CSR_TMS(v)   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TMS) = (v))
#endif
//@}

/*! @name Register LPTMR_CSR, field TFC[2] (RW)
 *
 * When clear, TFC configures the CNR to reset whenever TCF is set. When set, TFC configures the CNR
 * to reset on overflow. TFC must be altered only when the LPTMR is disabled.
 *
 * Values:
 * - 0 - CNR is reset whenever TCF is set.
 * - 1 - CNR is reset on overflow.
 */
//@{
#define BP_LPTMR_CSR_TFC      (2U)      //!< Bit position for LPTMR_CSR_TFC.
#define BM_LPTMR_CSR_TFC      (0x00000004U)  //!< Bit mask for LPTMR_CSR_TFC.
#define BS_LPTMR_CSR_TFC      (1U)  //!< Bitfield size in bits for LPTMR_CSR_TFC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_CSR_TFC field.
#define BR_LPTMR_CSR_TFC()   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TFC))
#endif

//! @brief Format value for bitfield LPTMR_CSR_TFC.
#define BF_LPTMR_CSR_TFC(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_CSR_TFC), uint32_t) & BM_LPTMR_CSR_TFC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TFC field to a new value.
#define BW_LPTMR_CSR_TFC(v)   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TFC) = (v))
#endif
//@}

/*! @name Register LPTMR_CSR, field TPP[3] (RW)
 *
 * Configures the polarity of the input source in Pulse Counter mode. TPP must be changed only when
 * the LPTMR is disabled.
 *
 * Values:
 * - 0 - Pulse Counter input source is active-high, and the CNR will increment on the rising-edge.
 * - 1 - Pulse Counter input source is active-low, and the CNR will increment on the falling-edge.
 */
//@{
#define BP_LPTMR_CSR_TPP      (3U)      //!< Bit position for LPTMR_CSR_TPP.
#define BM_LPTMR_CSR_TPP      (0x00000008U)  //!< Bit mask for LPTMR_CSR_TPP.
#define BS_LPTMR_CSR_TPP      (1U)  //!< Bitfield size in bits for LPTMR_CSR_TPP.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_CSR_TPP field.
#define BR_LPTMR_CSR_TPP()   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TPP))
#endif

//! @brief Format value for bitfield LPTMR_CSR_TPP.
#define BF_LPTMR_CSR_TPP(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_CSR_TPP), uint32_t) & BM_LPTMR_CSR_TPP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TPP field to a new value.
#define BW_LPTMR_CSR_TPP(v)   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TPP) = (v))
#endif
//@}

/*! @name Register LPTMR_CSR, field TPS[5:4] (RW)
 *
 * Configures the input source to be used in Pulse Counter mode. TPS must be altered only when the
 * LPTMR is disabled. The input connections vary by device. See the chip configuration details for
 * information on the connections to these inputs.
 *
 * Values:
 * - 00 - Pulse counter input 0 is selected.
 * - 01 - Pulse counter input 1 is selected.
 * - 10 - Pulse counter input 2 is selected.
 * - 11 - Pulse counter input 3 is selected.
 */
//@{
#define BP_LPTMR_CSR_TPS      (4U)      //!< Bit position for LPTMR_CSR_TPS.
#define BM_LPTMR_CSR_TPS      (0x00000030U)  //!< Bit mask for LPTMR_CSR_TPS.
#define BS_LPTMR_CSR_TPS      (2U)  //!< Bitfield size in bits for LPTMR_CSR_TPS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_CSR_TPS field.
#define BR_LPTMR_CSR_TPS()   (HW_LPTMR_CSR.B.TPS)
#endif

//! @brief Format value for bitfield LPTMR_CSR_TPS.
#define BF_LPTMR_CSR_TPS(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_CSR_TPS), uint32_t) & BM_LPTMR_CSR_TPS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TPS field to a new value.
#define BW_LPTMR_CSR_TPS(v)   (HW_LPTMR_CSR_WR((HW_LPTMR_CSR_RD() & ~BM_LPTMR_CSR_TPS) | BF_LPTMR_CSR_TPS(v)))
#endif
//@}

/*! @name Register LPTMR_CSR, field TIE[6] (RW)
 *
 * When TIE is set, the LPTMR Interrupt is generated whenever TCF is also set.
 *
 * Values:
 * - 0 - Timer interrupt disabled.
 * - 1 - Timer interrupt enabled.
 */
//@{
#define BP_LPTMR_CSR_TIE      (6U)      //!< Bit position for LPTMR_CSR_TIE.
#define BM_LPTMR_CSR_TIE      (0x00000040U)  //!< Bit mask for LPTMR_CSR_TIE.
#define BS_LPTMR_CSR_TIE      (1U)  //!< Bitfield size in bits for LPTMR_CSR_TIE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_CSR_TIE field.
#define BR_LPTMR_CSR_TIE()   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TIE))
#endif

//! @brief Format value for bitfield LPTMR_CSR_TIE.
#define BF_LPTMR_CSR_TIE(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_CSR_TIE), uint32_t) & BM_LPTMR_CSR_TIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TIE field to a new value.
#define BW_LPTMR_CSR_TIE(v)   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TIE) = (v))
#endif
//@}

/*! @name Register LPTMR_CSR, field TCF[7] (W1C)
 *
 * TCF is set when the LPTMR is enabled and the CNR equals the CMR and increments. TCF is cleared
 * when the LPTMR is disabled or a logic 1 is written to it.
 *
 * Values:
 * - 0 - The value of CNR is not equal to CMR and increments.
 * - 1 - The value of CNR is equal to CMR and increments.
 */
//@{
#define BP_LPTMR_CSR_TCF      (7U)      //!< Bit position for LPTMR_CSR_TCF.
#define BM_LPTMR_CSR_TCF      (0x00000080U)  //!< Bit mask for LPTMR_CSR_TCF.
#define BS_LPTMR_CSR_TCF      (1U)  //!< Bitfield size in bits for LPTMR_CSR_TCF.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_CSR_TCF field.
#define BR_LPTMR_CSR_TCF()   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TCF))
#endif

//! @brief Format value for bitfield LPTMR_CSR_TCF.
#define BF_LPTMR_CSR_TCF(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_CSR_TCF), uint32_t) & BM_LPTMR_CSR_TCF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TCF field to a new value.
#define BW_LPTMR_CSR_TCF(v)   (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR, BP_LPTMR_CSR_TCF) = (v))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_LPTMR_PSR - Low Power Timer Prescale Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_LPTMR_PSR - Low Power Timer Prescale Register (RW)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_lptmr_psr
{
    uint32_t U;
    struct _hw_lptmr_psr_bitfields
    {
        uint32_t PCS : 2; //!< [1:0] Prescaler Clock Select
        uint32_t PBYP : 1; //!< [2] Prescaler Bypass
        uint32_t PRESCALE : 4; //!< [6:3] Prescale Value
        uint32_t RESERVED0 : 25; //!< [31:7] 
    } B;
} hw_lptmr_psr_t;
#endif

/*!
 * @name Constants and macros for entire LPTMR_PSR register
 */
//@{
#define HW_LPTMR_PSR_ADDR      (REGS_LPTMR_BASE + 0x4U)

#ifndef __LANGUAGE_ASM__
#define HW_LPTMR_PSR           (*(__IO hw_lptmr_psr_t *) HW_LPTMR_PSR_ADDR)
#define HW_LPTMR_PSR_RD()      (HW_LPTMR_PSR.U)
#define HW_LPTMR_PSR_WR(v)     (HW_LPTMR_PSR.U = (v))
#define HW_LPTMR_PSR_SET(v)    (HW_LPTMR_PSR_WR(HW_LPTMR_PSR_RD() |  (v)))
#define HW_LPTMR_PSR_CLR(v)    (HW_LPTMR_PSR_WR(HW_LPTMR_PSR_RD() & ~(v)))
#define HW_LPTMR_PSR_TOG(v)    (HW_LPTMR_PSR_WR(HW_LPTMR_PSR_RD() ^  (v)))
#endif
//@}

/*
 * constants & macros for individual LPTMR_PSR bitfields
 */

/*! @name Register LPTMR_PSR, field PCS[1:0] (RW)
 *
 * Selects the clock to be used by the LPTMR prescaler/glitch filter. PCS must be altered only when
 * the LPTMR is disabled. The clock connections vary by device. See the chip configuration details
 * for information on the connections to these inputs.
 *
 * Values:
 * - 00 - Prescaler/glitch filter clock 0 selected.
 * - 01 - Prescaler/glitch filter clock 1 selected.
 * - 10 - Prescaler/glitch filter clock 2 selected.
 * - 11 - Prescaler/glitch filter clock 3 selected.
 */
//@{
#define BP_LPTMR_PSR_PCS      (0U)      //!< Bit position for LPTMR_PSR_PCS.
#define BM_LPTMR_PSR_PCS      (0x00000003U)  //!< Bit mask for LPTMR_PSR_PCS.
#define BS_LPTMR_PSR_PCS      (2U)  //!< Bitfield size in bits for LPTMR_PSR_PCS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_PSR_PCS field.
#define BR_LPTMR_PSR_PCS()   (HW_LPTMR_PSR.B.PCS)
#endif

//! @brief Format value for bitfield LPTMR_PSR_PCS.
#define BF_LPTMR_PSR_PCS(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_PSR_PCS), uint32_t) & BM_LPTMR_PSR_PCS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PCS field to a new value.
#define BW_LPTMR_PSR_PCS(v)   (HW_LPTMR_PSR_WR((HW_LPTMR_PSR_RD() & ~BM_LPTMR_PSR_PCS) | BF_LPTMR_PSR_PCS(v)))
#endif
//@}

/*! @name Register LPTMR_PSR, field PBYP[2] (RW)
 *
 * When PBYP is set, the selected prescaler clock in Time Counter mode or selected input source in
 * Pulse Counter mode directly clocks the CNR. When PBYP is clear, the CNR is clocked by the output
 * of the prescaler/glitch filter. PBYP must be altered only when the LPTMR is disabled.
 *
 * Values:
 * - 0 - Prescaler/glitch filter is enabled.
 * - 1 - Prescaler/glitch filter is bypassed.
 */
//@{
#define BP_LPTMR_PSR_PBYP      (2U)      //!< Bit position for LPTMR_PSR_PBYP.
#define BM_LPTMR_PSR_PBYP      (0x00000004U)  //!< Bit mask for LPTMR_PSR_PBYP.
#define BS_LPTMR_PSR_PBYP      (1U)  //!< Bitfield size in bits for LPTMR_PSR_PBYP.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_PSR_PBYP field.
#define BR_LPTMR_PSR_PBYP()   (BITBAND_ACCESS32(HW_LPTMR_PSR_ADDR, BP_LPTMR_PSR_PBYP))
#endif

//! @brief Format value for bitfield LPTMR_PSR_PBYP.
#define BF_LPTMR_PSR_PBYP(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_PSR_PBYP), uint32_t) & BM_LPTMR_PSR_PBYP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PBYP field to a new value.
#define BW_LPTMR_PSR_PBYP(v)   (BITBAND_ACCESS32(HW_LPTMR_PSR_ADDR, BP_LPTMR_PSR_PBYP) = (v))
#endif
//@}

/*! @name Register LPTMR_PSR, field PRESCALE[6:3] (RW)
 *
 * Configures the size of the Prescaler in Time Counter mode or width of the glitch filter in Pulse
 * Counter mode. PRESCALE must be altered only when the LPTMR is disabled.
 *
 * Values:
 * - 0000 - Prescaler divides the prescaler clock by 2; glitch filter does not support this configuration.
 * - 0001 - Prescaler divides the prescaler clock by 4; glitch filter recognizes change on input pin after 2
 *     rising clock edges.
 * - 0010 - Prescaler divides the prescaler clock by 8; glitch filter recognizes change on input pin after 4
 *     rising clock edges.
 * - 0011 - Prescaler divides the prescaler clock by 16; glitch filter recognizes change on input pin after 8
 *     rising clock edges.
 * - 0100 - Prescaler divides the prescaler clock by 32; glitch filter recognizes change on input pin after 16
 *     rising clock edges.
 * - 0101 - Prescaler divides the prescaler clock by 64; glitch filter recognizes change on input pin after 32
 *     rising clock edges.
 * - 0110 - Prescaler divides the prescaler clock by 128; glitch filter recognizes change on input pin after 64
 *     rising clock edges.
 * - 0111 - Prescaler divides the prescaler clock by 256; glitch filter recognizes change on input pin after 128
 *     rising clock edges.
 * - 1000 - Prescaler divides the prescaler clock by 512; glitch filter recognizes change on input pin after 256
 *     rising clock edges.
 * - 1001 - Prescaler divides the prescaler clock by 1024; glitch filter recognizes change on input pin after
 *     512 rising clock edges.
 * - 1010 - Prescaler divides the prescaler clock by 2048; glitch filter recognizes change on input pin after
 *     1024 rising clock edges.
 * - 1011 - Prescaler divides the prescaler clock by 4096; glitch filter recognizes change on input pin after
 *     2048 rising clock edges.
 * - 1100 - Prescaler divides the prescaler clock by 8192; glitch filter recognizes change on input pin after
 *     4096 rising clock edges.
 * - 1101 - Prescaler divides the prescaler clock by 16,384; glitch filter recognizes change on input pin after
 *     8192 rising clock edges.
 * - 1110 - Prescaler divides the prescaler clock by 32,768; glitch filter recognizes change on input pin after
 *     16,384 rising clock edges.
 * - 1111 - Prescaler divides the prescaler clock by 65,536; glitch filter recognizes change on input pin after
 *     32,768 rising clock edges.
 */
//@{
#define BP_LPTMR_PSR_PRESCALE      (3U)      //!< Bit position for LPTMR_PSR_PRESCALE.
#define BM_LPTMR_PSR_PRESCALE      (0x00000078U)  //!< Bit mask for LPTMR_PSR_PRESCALE.
#define BS_LPTMR_PSR_PRESCALE      (4U)  //!< Bitfield size in bits for LPTMR_PSR_PRESCALE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_PSR_PRESCALE field.
#define BR_LPTMR_PSR_PRESCALE()   (HW_LPTMR_PSR.B.PRESCALE)
#endif

//! @brief Format value for bitfield LPTMR_PSR_PRESCALE.
#define BF_LPTMR_PSR_PRESCALE(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_PSR_PRESCALE), uint32_t) & BM_LPTMR_PSR_PRESCALE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PRESCALE field to a new value.
#define BW_LPTMR_PSR_PRESCALE(v)   (HW_LPTMR_PSR_WR((HW_LPTMR_PSR_RD() & ~BM_LPTMR_PSR_PRESCALE) | BF_LPTMR_PSR_PRESCALE(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_LPTMR_CMR - Low Power Timer Compare Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_LPTMR_CMR - Low Power Timer Compare Register (RW)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_lptmr_cmr
{
    uint32_t U;
    struct _hw_lptmr_cmr_bitfields
    {
        uint32_t COMPARE : 16; //!< [15:0] Compare Value
        uint32_t RESERVED0 : 16; //!< [31:16] 
    } B;
} hw_lptmr_cmr_t;
#endif

/*!
 * @name Constants and macros for entire LPTMR_CMR register
 */
//@{
#define HW_LPTMR_CMR_ADDR      (REGS_LPTMR_BASE + 0x8U)

#ifndef __LANGUAGE_ASM__
#define HW_LPTMR_CMR           (*(__IO hw_lptmr_cmr_t *) HW_LPTMR_CMR_ADDR)
#define HW_LPTMR_CMR_RD()      (HW_LPTMR_CMR.U)
#define HW_LPTMR_CMR_WR(v)     (HW_LPTMR_CMR.U = (v))
#define HW_LPTMR_CMR_SET(v)    (HW_LPTMR_CMR_WR(HW_LPTMR_CMR_RD() |  (v)))
#define HW_LPTMR_CMR_CLR(v)    (HW_LPTMR_CMR_WR(HW_LPTMR_CMR_RD() & ~(v)))
#define HW_LPTMR_CMR_TOG(v)    (HW_LPTMR_CMR_WR(HW_LPTMR_CMR_RD() ^  (v)))
#endif
//@}

/*
 * constants & macros for individual LPTMR_CMR bitfields
 */

/*! @name Register LPTMR_CMR, field COMPARE[15:0] (RW)
 *
 * When the LPTMR is enabled and the CNR equals the value in the CMR and increments, TCF is set and
 * the hardware trigger asserts until the next time the CNR increments. If the CMR is 0, the
 * hardware trigger will remain asserted until the LPTMR is disabled. If the LPTMR is enabled, the
 * CMR must be altered only when TCF is set.
 */
//@{
#define BP_LPTMR_CMR_COMPARE      (0U)      //!< Bit position for LPTMR_CMR_COMPARE.
#define BM_LPTMR_CMR_COMPARE      (0x0000ffffU)  //!< Bit mask for LPTMR_CMR_COMPARE.
#define BS_LPTMR_CMR_COMPARE      (16U)  //!< Bitfield size in bits for LPTMR_CMR_COMPARE.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_CMR_COMPARE field.
#define BR_LPTMR_CMR_COMPARE()   (HW_LPTMR_CMR.B.COMPARE)
#endif

//! @brief Format value for bitfield LPTMR_CMR_COMPARE.
#define BF_LPTMR_CMR_COMPARE(v)   (__REG_VALUE_TYPE((__REG_VALUE_TYPE((v), uint32_t) << BP_LPTMR_CMR_COMPARE), uint32_t) & BM_LPTMR_CMR_COMPARE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the COMPARE field to a new value.
#define BW_LPTMR_CMR_COMPARE(v)   (HW_LPTMR_CMR_WR((HW_LPTMR_CMR_RD() & ~BM_LPTMR_CMR_COMPARE) | BF_LPTMR_CMR_COMPARE(v)))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_LPTMR_CNR - Low Power Timer Counter Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_LPTMR_CNR - Low Power Timer Counter Register (RO)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_lptmr_cnr
{
    uint32_t U;
    struct _hw_lptmr_cnr_bitfields
    {
        uint32_t COUNTER : 16; //!< [15:0] Counter Value
        uint32_t RESERVED0 : 16; //!< [31:16] 
    } B;
} hw_lptmr_cnr_t;
#endif

/*!
 * @name Constants and macros for entire LPTMR_CNR register
 */
//@{
#define HW_LPTMR_CNR_ADDR      (REGS_LPTMR_BASE + 0xcU)

#ifndef __LANGUAGE_ASM__
#define HW_LPTMR_CNR           (*(__I hw_lptmr_cnr_t *) HW_LPTMR_CNR_ADDR)
#define HW_LPTMR_CNR_RD()      (HW_LPTMR_CNR.U)
#endif
//@}

/*
 * constants & macros for individual LPTMR_CNR bitfields
 */

/*! @name Register LPTMR_CNR, field COUNTER[15:0] (RO)
 */
//@{
#define BP_LPTMR_CNR_COUNTER      (0U)      //!< Bit position for LPTMR_CNR_COUNTER.
#define BM_LPTMR_CNR_COUNTER      (0x0000ffffU)  //!< Bit mask for LPTMR_CNR_COUNTER.
#define BS_LPTMR_CNR_COUNTER      (16U)  //!< Bitfield size in bits for LPTMR_CNR_COUNTER.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the LPTMR_CNR_COUNTER field.
#define BR_LPTMR_CNR_COUNTER()   (HW_LPTMR_CNR.B.COUNTER)
#endif
//@}

//-------------------------------------------------------------------------------------------
// hw_lptmr_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All LPTMR module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_lptmr
{
    __IO hw_lptmr_csr_t CSR; //!< [0x0] Low Power Timer Control Status Register
    __IO hw_lptmr_psr_t PSR; //!< [0x4] Low Power Timer Prescale Register
    __IO hw_lptmr_cmr_t CMR; //!< [0x8] Low Power Timer Compare Register
    __I hw_lptmr_cnr_t CNR; //!< [0xc] Low Power Timer Counter Register
} hw_lptmr_t;
#pragma pack()

//! @brief Macro to access all LPTMR registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_LPTMR</code>.
#define HW_LPTMR     (*(hw_lptmr_t *) REGS_LPTMR_BASE)
#endif

#endif // __HW_LPTMR_REGISTERS_H__
// v22/130417/1.2.6
// EOF
