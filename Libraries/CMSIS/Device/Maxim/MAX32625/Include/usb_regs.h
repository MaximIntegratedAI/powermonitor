/*******************************************************************************
 * Copyright (C) 2016 Maxim Integrated Products, Inc., All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated
 * Products, Inc. shall not be used except as stated in the Maxim Integrated
 * Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all
 * ownership rights.
 *
 * $Date: 2016-03-11 12:50:27 -0600 (Fri, 11 Mar 2016) $
 * $Revision: 21840 $
 *
 ******************************************************************************/

#ifndef _MXC_USB_REGS_H_
#define _MXC_USB_REGS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/*
    If types are not defined elsewhere (CMSIS) define them here
*/
#ifndef __IO
#define __IO volatile
#endif
#ifndef __I
#define __I  volatile const
#endif
#ifndef __O
#define __O  volatile
#endif
#ifndef __R
#define __R  volatile const
#endif


#define MXC_V_USB_EP_DIR_DISABLE          ((uint32_t)0x00000000UL)
#define MXC_V_USB_EP_DIR_OUT              ((uint32_t)0x00000001UL)
#define MXC_V_USB_EP_DIR_IN               ((uint32_t)0x00000002UL)
#define MXC_V_USB_EP_DIR_CONTROL          ((uint32_t)0x00000003UL)

#define MXC_S_USB_EP_DIR_DISABLE          (MXC_V_USB_EP_DIR_DISABLE << MXC_F_USB_EP_DIR_POS)
#define MXC_S_USB_EP_DIR_OUT              (MXC_V_USB_EP_DIR_OUT << MXC_F_USB_EP_DIR_POS)
#define MXC_S_USB_EP_DIR_IN               (MXC_V_USB_EP_DIR_IN << MXC_F_USB_EP_DIR_POS)
#define MXC_S_USB_EP_DIR_CONTROL          (MXC_V_USB_EP_DIR_CONTROL << MXC_F_USB_EP_DIR_POS)

/*
   Typedefed structure(s) for module registers (per instance or section) with direct 32-bit
   access to each register in module.
*/

/*                                                          Offset          Register Description
                                                            =============   ============================================================================ */
typedef struct {
    __IO uint32_t cn;                                   /*  0x0000          USB Control Register                                                         */
    __R  uint32_t rsv004[127];                          /*  0x0004-0x01FC                                                                                */
    __IO uint32_t dev_addr;                             /*  0x0200          USB Device Address Register                                                  */
    __IO uint32_t dev_cn;                               /*  0x0204          USB Device Control Register                                                  */
    __IO uint32_t dev_intfl;                            /*  0x0208          USB Device Interrupt                                                         */
    __IO uint32_t dev_inten;                            /*  0x020C          USB Device Interrupt Enable                                                  */
    __R  uint32_t rsv210[4];                            /*  0x0210-0x021C                                                                                */
    __IO uint32_t ep_base;                              /*  0x0220          USB Endpoint Descriptor Table Base Address                                   */
    __IO uint32_t cur_buf;                              /*  0x0224          USB Current Endpoint Buffer Register                                         */
    __IO uint32_t in_owner;                             /*  0x0228          USB IN Endpoint Buffer Owner Register                                        */
    __IO uint32_t out_owner;                            /*  0x022C          USB OUT Endpoint Buffer Owner Register                                       */
    __IO uint32_t in_int;                               /*  0x0230          USB IN Endpoint Buffer Available Interrupt                                   */
    __IO uint32_t out_int;                              /*  0x0234          USB OUT Endpoint Data Available Interrupt                                    */
    __IO uint32_t nak_int;                              /*  0x0238          USB IN Endpoint NAK Interrupt                                                */
    __IO uint32_t dma_err_int;                          /*  0x023C          USB DMA Error Interrupt                                                      */
    __IO uint32_t buf_ovr_int;                          /*  0x0240          USB Buffer Overflow Interrupt                                                */
    __R  uint32_t rsv244[7];                            /*  0x0244-0x025C                                                                                */
    __IO uint32_t setup0;                               /*  0x0260          USB SETUP Packet Bytes 0 to 3                                                */
    __IO uint32_t setup1;                               /*  0x0264          USB SETUP Packet Bytes 4 to 7                                                */
    __R  uint32_t rsv268[6];                            /*  0x0268-0x027C                                                                                */
    __IO uint32_t ep[8];                                /*  0x0280-0x029C   USB Endpoint[n] Control Register                                             */
} mxc_usb_regs_t;


/*
   Register offsets for module USB.
*/

#define MXC_R_USB_OFFS_CN                                   ((uint32_t)0x00000000UL)
#define MXC_R_USB_OFFS_DEV_ADDR                             ((uint32_t)0x00000200UL)
#define MXC_R_USB_OFFS_DEV_CN                               ((uint32_t)0x00000204UL)
#define MXC_R_USB_OFFS_DEV_INTFL                            ((uint32_t)0x00000208UL)
#define MXC_R_USB_OFFS_DEV_INTEN                            ((uint32_t)0x0000020CUL)
#define MXC_R_USB_OFFS_EP_BASE                              ((uint32_t)0x00000220UL)
#define MXC_R_USB_OFFS_CUR_BUF                              ((uint32_t)0x00000224UL)
#define MXC_R_USB_OFFS_IN_OWNER                             ((uint32_t)0x00000228UL)
#define MXC_R_USB_OFFS_OUT_OWNER                            ((uint32_t)0x0000022CUL)
#define MXC_R_USB_OFFS_IN_INT                               ((uint32_t)0x00000230UL)
#define MXC_R_USB_OFFS_OUT_INT                              ((uint32_t)0x00000234UL)
#define MXC_R_USB_OFFS_NAK_INT                              ((uint32_t)0x00000238UL)
#define MXC_R_USB_OFFS_DMA_ERR_INT                          ((uint32_t)0x0000023CUL)
#define MXC_R_USB_OFFS_BUF_OVR_INT                          ((uint32_t)0x00000240UL)
#define MXC_R_USB_OFFS_SETUP0                               ((uint32_t)0x00000260UL)
#define MXC_R_USB_OFFS_SETUP1                               ((uint32_t)0x00000264UL)
#define MXC_R_USB_OFFS_EP0                                  ((uint32_t)0x00000280UL)
#define MXC_R_USB_OFFS_EP1                                  ((uint32_t)0x00000284UL)
#define MXC_R_USB_OFFS_EP2                                  ((uint32_t)0x00000288UL)
#define MXC_R_USB_OFFS_EP3                                  ((uint32_t)0x0000028CUL)
#define MXC_R_USB_OFFS_EP4                                  ((uint32_t)0x00000290UL)
#define MXC_R_USB_OFFS_EP5                                  ((uint32_t)0x00000294UL)
#define MXC_R_USB_OFFS_EP6                                  ((uint32_t)0x00000298UL)
#define MXC_R_USB_OFFS_EP7                                  ((uint32_t)0x0000029CUL)


/*
   Field positions and masks for module USB.
*/

#define MXC_F_USB_CN_USB_EN_POS                             0
#define MXC_F_USB_CN_USB_EN                                 ((uint32_t)(0x00000001UL << MXC_F_USB_CN_USB_EN_POS))
#define MXC_F_USB_CN_HOST_POS                               1
#define MXC_F_USB_CN_HOST                                   ((uint32_t)(0x00000001UL << MXC_F_USB_CN_HOST_POS))

#define MXC_F_USB_DEV_ADDR_DEV_ADDR_POS                     0
#define MXC_F_USB_DEV_ADDR_DEV_ADDR                         ((uint32_t)(0x0000007FUL << MXC_F_USB_DEV_ADDR_DEV_ADDR_POS))

#define MXC_F_USB_DEV_CN_SIGRWU_POS                         2
#define MXC_F_USB_DEV_CN_SIGRWU                             ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_CN_SIGRWU_POS))
#define MXC_F_USB_DEV_CN_CONNECT_POS                        3
#define MXC_F_USB_DEV_CN_CONNECT                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_CN_CONNECT_POS))
#define MXC_F_USB_DEV_CN_ULPM_POS                           4
#define MXC_F_USB_DEV_CN_ULPM                               ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_CN_ULPM_POS))
#define MXC_F_USB_DEV_CN_URST_POS                           5
#define MXC_F_USB_DEV_CN_URST                               ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_CN_URST_POS))
#define MXC_F_USB_DEV_CN_VBGATE_POS                         6
#define MXC_F_USB_DEV_CN_VBGATE                             ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_CN_VBGATE_POS))
#define MXC_F_USB_DEV_CN_OSCEN_POS                          7
#define MXC_F_USB_DEV_CN_OSCEN                              ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_CN_OSCEN_POS))
#define MXC_F_USB_DEV_CN_BACT_OE_POS                        8
#define MXC_F_USB_DEV_CN_BACT_OE                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_CN_BACT_OE_POS))
#define MXC_F_USB_DEV_CN_FIFO_MODE_POS                      9
#define MXC_F_USB_DEV_CN_FIFO_MODE                          ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_CN_FIFO_MODE_POS))

#define MXC_F_USB_DEV_INTFL_DPACT_POS                       0
#define MXC_F_USB_DEV_INTFL_DPACT                           ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_DPACT_POS))
#define MXC_F_USB_DEV_INTFL_RWU_DN_POS                      1
#define MXC_F_USB_DEV_INTFL_RWU_DN                          ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_RWU_DN_POS))
#define MXC_F_USB_DEV_INTFL_BACT_POS                        2
#define MXC_F_USB_DEV_INTFL_BACT                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_BACT_POS))
#define MXC_F_USB_DEV_INTFL_BRST_POS                        3
#define MXC_F_USB_DEV_INTFL_BRST                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_BRST_POS))
#define MXC_F_USB_DEV_INTFL_SUSP_POS                        4
#define MXC_F_USB_DEV_INTFL_SUSP                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_SUSP_POS))
#define MXC_F_USB_DEV_INTFL_NO_VBUS_POS                     5
#define MXC_F_USB_DEV_INTFL_NO_VBUS                         ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_NO_VBUS_POS))
#define MXC_F_USB_DEV_INTFL_VBUS_POS                        6
#define MXC_F_USB_DEV_INTFL_VBUS                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_VBUS_POS))
#define MXC_F_USB_DEV_INTFL_BRST_DN_POS                     7
#define MXC_F_USB_DEV_INTFL_BRST_DN                         ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_BRST_DN_POS))
#define MXC_F_USB_DEV_INTFL_SETUP_POS                       8
#define MXC_F_USB_DEV_INTFL_SETUP                           ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_SETUP_POS))
#define MXC_F_USB_DEV_INTFL_EP_IN_POS                       9
#define MXC_F_USB_DEV_INTFL_EP_IN                           ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_EP_IN_POS))
#define MXC_F_USB_DEV_INTFL_EP_OUT_POS                      10
#define MXC_F_USB_DEV_INTFL_EP_OUT                          ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_EP_OUT_POS))
#define MXC_F_USB_DEV_INTFL_EP_NAK_POS                      11
#define MXC_F_USB_DEV_INTFL_EP_NAK                          ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_EP_NAK_POS))
#define MXC_F_USB_DEV_INTFL_DMA_ERR_POS                     12
#define MXC_F_USB_DEV_INTFL_DMA_ERR                         ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_DMA_ERR_POS))
#define MXC_F_USB_DEV_INTFL_BUF_OVR_POS                     13
#define MXC_F_USB_DEV_INTFL_BUF_OVR                         ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_BUF_OVR_POS))
#define MXC_F_USB_DEV_INTFL_VBUS_ST_POS                     16
#define MXC_F_USB_DEV_INTFL_VBUS_ST                         ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTFL_VBUS_ST_POS))

#define MXC_F_USB_DEV_INTEN_DPACT_POS                       0
#define MXC_F_USB_DEV_INTEN_DPACT                           ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_DPACT_POS))
#define MXC_F_USB_DEV_INTEN_RWU_DN_POS                      1
#define MXC_F_USB_DEV_INTEN_RWU_DN                          ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_RWU_DN_POS))
#define MXC_F_USB_DEV_INTEN_BACT_POS                        2
#define MXC_F_USB_DEV_INTEN_BACT                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_BACT_POS))
#define MXC_F_USB_DEV_INTEN_BRST_POS                        3
#define MXC_F_USB_DEV_INTEN_BRST                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_BRST_POS))
#define MXC_F_USB_DEV_INTEN_SUSP_POS                        4
#define MXC_F_USB_DEV_INTEN_SUSP                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_SUSP_POS))
#define MXC_F_USB_DEV_INTEN_NO_VBUS_POS                     5
#define MXC_F_USB_DEV_INTEN_NO_VBUS                         ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_NO_VBUS_POS))
#define MXC_F_USB_DEV_INTEN_VBUS_POS                        6
#define MXC_F_USB_DEV_INTEN_VBUS                            ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_VBUS_POS))
#define MXC_F_USB_DEV_INTEN_BRST_DN_POS                     7
#define MXC_F_USB_DEV_INTEN_BRST_DN                         ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_BRST_DN_POS))
#define MXC_F_USB_DEV_INTEN_SETUP_POS                       8
#define MXC_F_USB_DEV_INTEN_SETUP                           ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_SETUP_POS))
#define MXC_F_USB_DEV_INTEN_EP_IN_POS                       9
#define MXC_F_USB_DEV_INTEN_EP_IN                           ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_EP_IN_POS))
#define MXC_F_USB_DEV_INTEN_EP_OUT_POS                      10
#define MXC_F_USB_DEV_INTEN_EP_OUT                          ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_EP_OUT_POS))
#define MXC_F_USB_DEV_INTEN_EP_NAK_POS                      11
#define MXC_F_USB_DEV_INTEN_EP_NAK                          ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_EP_NAK_POS))
#define MXC_F_USB_DEV_INTEN_DMA_ERR_POS                     12
#define MXC_F_USB_DEV_INTEN_DMA_ERR                         ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_DMA_ERR_POS))
#define MXC_F_USB_DEV_INTEN_BUF_OVR_POS                     13
#define MXC_F_USB_DEV_INTEN_BUF_OVR                         ((uint32_t)(0x00000001UL << MXC_F_USB_DEV_INTEN_BUF_OVR_POS))

#define MXC_F_USB_EP_BASE_EP_BASE_POS                       9
#define MXC_F_USB_EP_BASE_EP_BASE                           ((uint32_t)(0x007FFFFFUL << MXC_F_USB_EP_BASE_EP_BASE_POS))

#define MXC_F_USB_CUR_BUF_OUT_BUF_POS                       0
#define MXC_F_USB_CUR_BUF_OUT_BUF                           ((uint32_t)(0x0000FFFFUL << MXC_F_USB_CUR_BUF_OUT_BUF_POS))
#define MXC_F_USB_CUR_BUF_IN_BUF_POS                        16
#define MXC_F_USB_CUR_BUF_IN_BUF                            ((uint32_t)(0x0000FFFFUL << MXC_F_USB_CUR_BUF_IN_BUF_POS))

#define MXC_F_USB_IN_OWNER_BUF0_OWNER_POS                   0
#define MXC_F_USB_IN_OWNER_BUF0_OWNER                       ((uint32_t)(0x0000FFFFUL << MXC_F_USB_IN_OWNER_BUF0_OWNER_POS))
#define MXC_F_USB_IN_OWNER_BUF1_OWNER_POS                   16
#define MXC_F_USB_IN_OWNER_BUF1_OWNER                       ((uint32_t)(0x0000FFFFUL << MXC_F_USB_IN_OWNER_BUF1_OWNER_POS))

#define MXC_F_USB_OUT_OWNER_BUF0_OWNER_POS                  0
#define MXC_F_USB_OUT_OWNER_BUF0_OWNER                      ((uint32_t)(0x0000FFFFUL << MXC_F_USB_OUT_OWNER_BUF0_OWNER_POS))
#define MXC_F_USB_OUT_OWNER_BUF1_OWNER_POS                  16
#define MXC_F_USB_OUT_OWNER_BUF1_OWNER                      ((uint32_t)(0x0000FFFFUL << MXC_F_USB_OUT_OWNER_BUF1_OWNER_POS))

#define MXC_F_USB_IN_INT_INBAV_POS                          0
#define MXC_F_USB_IN_INT_INBAV                              ((uint32_t)(0x000000FFUL << MXC_F_USB_IN_INT_INBAV_POS))

#define MXC_F_USB_OUT_INT_OUTDAV_POS                        0
#define MXC_F_USB_OUT_INT_OUTDAV                            ((uint32_t)(0x000000FFUL << MXC_F_USB_OUT_INT_OUTDAV_POS))

#define MXC_F_USB_NAK_INT_NAK_POS                           0
#define MXC_F_USB_NAK_INT_NAK                               ((uint32_t)(0x000000FFUL << MXC_F_USB_NAK_INT_NAK_POS))

#define MXC_F_USB_DMA_ERR_INT_DMA_ERR_POS                   0
#define MXC_F_USB_DMA_ERR_INT_DMA_ERR                       ((uint32_t)(0x000000FFUL << MXC_F_USB_DMA_ERR_INT_DMA_ERR_POS))

#define MXC_F_USB_BUF_OVR_INT_BUF_OVR_POS                   0
#define MXC_F_USB_BUF_OVR_INT_BUF_OVR                       ((uint32_t)(0x000000FFUL << MXC_F_USB_BUF_OVR_INT_BUF_OVR_POS))

#define MXC_F_USB_SETUP0_BYTE0_POS                          0
#define MXC_F_USB_SETUP0_BYTE0                              ((uint32_t)(0x000000FFUL << MXC_F_USB_SETUP0_BYTE0_POS))
#define MXC_F_USB_SETUP0_BYTE1_POS                          8
#define MXC_F_USB_SETUP0_BYTE1                              ((uint32_t)(0x000000FFUL << MXC_F_USB_SETUP0_BYTE1_POS))
#define MXC_F_USB_SETUP0_BYTE2_POS                          16
#define MXC_F_USB_SETUP0_BYTE2                              ((uint32_t)(0x000000FFUL << MXC_F_USB_SETUP0_BYTE2_POS))
#define MXC_F_USB_SETUP0_BYTE3_POS                          24
#define MXC_F_USB_SETUP0_BYTE3                              ((uint32_t)(0x000000FFUL << MXC_F_USB_SETUP0_BYTE3_POS))

#define MXC_F_USB_SETUP1_BYTE0_POS                          0
#define MXC_F_USB_SETUP1_BYTE0                              ((uint32_t)(0x000000FFUL << MXC_F_USB_SETUP1_BYTE0_POS))
#define MXC_F_USB_SETUP1_BYTE1_POS                          8
#define MXC_F_USB_SETUP1_BYTE1                              ((uint32_t)(0x000000FFUL << MXC_F_USB_SETUP1_BYTE1_POS))
#define MXC_F_USB_SETUP1_BYTE2_POS                          16
#define MXC_F_USB_SETUP1_BYTE2                              ((uint32_t)(0x000000FFUL << MXC_F_USB_SETUP1_BYTE2_POS))
#define MXC_F_USB_SETUP1_BYTE3_POS                          24
#define MXC_F_USB_SETUP1_BYTE3                              ((uint32_t)(0x000000FFUL << MXC_F_USB_SETUP1_BYTE3_POS))

#define MXC_F_USB_EP_DIR_POS                                0
#define MXC_F_USB_EP_DIR                                    ((uint32_t)(0x00000003UL << MXC_F_USB_EP_DIR_POS))
#define MXC_F_USB_EP_BUF2_POS                               3
#define MXC_F_USB_EP_BUF2                                   ((uint32_t)(0x00000001UL << MXC_F_USB_EP_BUF2_POS))
#define MXC_F_USB_EP_INT_EN_POS                             4
#define MXC_F_USB_EP_INT_EN                                 ((uint32_t)(0x00000001UL << MXC_F_USB_EP_INT_EN_POS))
#define MXC_F_USB_EP_NAK_EN_POS                             5
#define MXC_F_USB_EP_NAK_EN                                 ((uint32_t)(0x00000001UL << MXC_F_USB_EP_NAK_EN_POS))
#define MXC_F_USB_EP_DT_POS                                 6
#define MXC_F_USB_EP_DT                                     ((uint32_t)(0x00000001UL << MXC_F_USB_EP_DT_POS))
#define MXC_F_USB_EP_STALL_POS                              8
#define MXC_F_USB_EP_STALL                                  ((uint32_t)(0x00000001UL << MXC_F_USB_EP_STALL_POS))
#define MXC_F_USB_EP_ST_STALL_POS                           9
#define MXC_F_USB_EP_ST_STALL                               ((uint32_t)(0x00000001UL << MXC_F_USB_EP_ST_STALL_POS))
#define MXC_F_USB_EP_ST_ACK_POS                             10
#define MXC_F_USB_EP_ST_ACK                                 ((uint32_t)(0x00000001UL << MXC_F_USB_EP_ST_ACK_POS))



#ifdef __cplusplus
}
#endif

#endif   /* _MXC_USB_REGS_H_ */

