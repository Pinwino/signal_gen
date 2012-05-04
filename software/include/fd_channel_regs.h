/*
  Register definitions for slave core: Fine Delay Channel WB Slave

  * File           : fd_channel_regs.h
  * Author         : auto-generated by wbgen2 from fd_channel_wishbone_slave.wb
  * Created        : Wed Apr 11 11:05:22 2012
  * Standard       : ANSI C

    THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE fd_channel_wishbone_slave.wb
    DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!

*/

#ifndef __WBGEN2_REGDEFS_FD_CHANNEL_WISHBONE_SLAVE_WB
#define __WBGEN2_REGDEFS_FD_CHANNEL_WISHBONE_SLAVE_WB

#include <inttypes.h>

#if defined( __GNUC__)
#define PACKED __attribute__ ((packed))
#else
#error "Unsupported compiler?"
#endif

#ifndef __WBGEN2_MACROS_DEFINED__
#define __WBGEN2_MACROS_DEFINED__
#define WBGEN2_GEN_MASK(offset, size) (((1<<(size))-1) << (offset))
#define WBGEN2_GEN_WRITE(value, offset, size) (((value) & ((1<<(size))-1)) << (offset))
#define WBGEN2_GEN_READ(reg, offset, size) (((reg) >> (offset)) & ((1<<(size))-1))
#define WBGEN2_SIGN_EXTEND(value, bits) (((value) & (1<<bits) ? ~((1<<(bits))-1): 0 ) | (value))
#endif


/* definitions for register: Delay Control Register */

/* definitions for field: Enable channel in reg: Delay Control Register */
#define FD_DCR_ENABLE                         WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Delay mode select in reg: Delay Control Register */
#define FD_DCR_MODE                           WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Pulse generator arm in reg: Delay Control Register */
#define FD_DCR_PG_ARM                         WBGEN2_GEN_MASK(2, 1)

/* definitions for field: Pulse generator triggered in reg: Delay Control Register */
#define FD_DCR_PG_TRIG                        WBGEN2_GEN_MASK(3, 1)

/* definitions for field: Start Delay Update in reg: Delay Control Register */
#define FD_DCR_UPDATE                         WBGEN2_GEN_MASK(4, 1)

/* definitions for field: Delay Update Done in reg: Delay Control Register */
#define FD_DCR_UPD_DONE                       WBGEN2_GEN_MASK(5, 1)

/* definitions for field: Force Calibration Delay in reg: Delay Control Register */
#define FD_DCR_FORCE_DLY                      WBGEN2_GEN_MASK(6, 1)

/* definitions for field: Disable Fine Part update in reg: Delay Control Register */
#define FD_DCR_NO_FINE                        WBGEN2_GEN_MASK(7, 1)

/* definitions for register: Fine Range Register */

/* definitions for register: Pulse start time / offset (MSB TAI seconds) */

/* definitions for register: Pulse start time / offset (LSB TAI seconds) */

/* definitions for register: Pulse start time / offset (8 ns cycles) */

/* definitions for register: Pulse start time / offset (sub-cycle fine part) */

/* definitions for register: Pulse end time / offset (MSB TAI seconds) */

/* definitions for register: Pulse end time / offset (LSB TAI seconds) */

/* definitions for register: Pulse end time / offset (8 ns cycles) */

/* definitions for register: Pulse end time / offset (sub-cycle fine part) */

/* definitions for register: Pulse spacing (TAI seconds) */

/* definitions for register: Pulse spacing (8 ns cycles) */

/* definitions for register: Pulse spacing (sub-cycle fine part) */

/* definitions for register: Repeat Count Register */

/* definitions for field: Repeat Count in reg: Repeat Count Register */
#define FD_RCR_REP_CNT_MASK                   WBGEN2_GEN_MASK(0, 16)
#define FD_RCR_REP_CNT_SHIFT                  0
#define FD_RCR_REP_CNT_W(value)               WBGEN2_GEN_WRITE(value, 0, 16)
#define FD_RCR_REP_CNT_R(reg)                 WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Continuous Waveform Mode in reg: Repeat Count Register */
#define FD_RCR_CONT                           WBGEN2_GEN_MASK(16, 1)
/* [0x0]: REG Delay Control Register */
#define FD_REG_DCR 0x00000000
/* [0x4]: REG Fine Range Register */
#define FD_REG_FRR 0x00000004
/* [0x8]: REG Pulse start time / offset (MSB TAI seconds) */
#define FD_REG_U_STARTH 0x00000008
/* [0xc]: REG Pulse start time / offset (LSB TAI seconds) */
#define FD_REG_U_STARTL 0x0000000c
/* [0x10]: REG Pulse start time / offset (8 ns cycles) */
#define FD_REG_C_START 0x00000010
/* [0x14]: REG Pulse start time / offset (sub-cycle fine part) */
#define FD_REG_F_START 0x00000014
/* [0x18]: REG Pulse end time / offset (MSB TAI seconds) */
#define FD_REG_U_ENDH 0x00000018
/* [0x1c]: REG Pulse end time / offset (LSB TAI seconds) */
#define FD_REG_U_ENDL 0x0000001c
/* [0x20]: REG Pulse end time / offset (8 ns cycles) */
#define FD_REG_C_END 0x00000020
/* [0x24]: REG Pulse end time / offset (sub-cycle fine part) */
#define FD_REG_F_END 0x00000024
/* [0x28]: REG Pulse spacing (TAI seconds) */
#define FD_REG_U_DELTA 0x00000028
/* [0x2c]: REG Pulse spacing (8 ns cycles) */
#define FD_REG_C_DELTA 0x0000002c
/* [0x30]: REG Pulse spacing (sub-cycle fine part) */
#define FD_REG_F_DELTA 0x00000030
/* [0x34]: REG Repeat Count Register */
#define FD_REG_RCR 0x00000034
#endif
