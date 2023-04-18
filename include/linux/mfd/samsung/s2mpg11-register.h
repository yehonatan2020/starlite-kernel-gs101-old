/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * include/linux/mfd/samsung/s2mpg11-register.h
 *
 * Copyright (C) 2015 Samsung Electrnoics
 *
 * header file including register information of s2mpg11
 */

#ifndef __LINUX_MFD_S2MPG11_REGISTER_H
#define __LINUX_MFD_S2MPG11_REGISTER_H
#include <linux/i2c.h>
#include "s2mpg1x-register.h"

#define S2MPG11_REG_INVALID (0xFF)
#define S2MPG11_IRQSRC_PMIC BIT(0)

/* Common(0x0) Registers */
enum S2MPG11_COMMON_REG {
	S2MPG11_COMMON_CHIPID = 0x0,
	S2MPG11_COMMON_INT,
	S2MPG11_COMMON_INT_MASK,
};

/* PM(0x1) Registers */
enum S2MPG11_PM_REG {
	S2MPG11_PM_INT1 = 0x0,
	S2MPG11_PM_INT2 = 0x1,
	S2MPG11_PM_INT3 = 0x2,
	S2MPG11_PM_INT4 = 0x3,
	S2MPG11_PM_INT5 = 0x4,
	S2MPG11_PM_INT6 = 0x5,
	S2MPG11_PM_INT1M = 0x6,
	S2MPG11_PM_INT2M = 0x7,
	S2MPG11_PM_INT3M = 0x8,
	S2MPG11_PM_INT4M = 0x9,
	S2MPG11_PM_INT5M = 0xA,
	S2MPG11_PM_INT6M = 0xB,
	S2MPG11_PM_STATUS1 = 0xC,
	S2MPG11_PM_OFFSRC = 0xD,
	S2MPG11_PM_COMMON_CTRL1 = 0x0E,
	S2MPG11_PM_COMMON_CTRL2 = 0x0F,
	S2MPG11_PM_COMMON_CTRL3 = 0x10,
	S2MPG11_PM_MIMICKING_CTRL = 0x11,
	S2MPG11_PM_B1S_CTRL = 0x12,
	S2MPG11_PM_B1S_OUT1 = 0x13,
	S2MPG11_PM_B1S_OUT2 = 0x14,
	S2MPG11_PM_B2S_CTRL = 0x15,
	S2MPG11_PM_B2S_OUT1 = 0x16,
	S2MPG11_PM_B2S_OUT2 = 0x17,
	S2MPG11_PM_B3S_CTRL = 0x18,
	S2MPG11_PM_B3S_OUT1 = 0x19,
	S2MPG11_PM_B3S_OUT2 = 0x1A,
	S2MPG11_PM_B4S_CTRL = 0x1B,
	S2MPG11_PM_B4S_OUT = 0x1C,
	S2MPG11_PM_B5S_CTRL = 0x1D,
	S2MPG11_PM_B5S_OUT = 0x1E,
	S2MPG11_PM_B6S_CTRL = 0x1F,
	S2MPG11_PM_B6S_OUT1 = 0x20,
	S2MPG11_PM_B6S_OUT2 = 0x21,
	S2MPG11_PM_B7S_CTRL = 0x22,
	S2MPG11_PM_B7S_OUT1 = 0x23,
	S2MPG11_PM_B7S_OUT2 = 0x24,
	S2MPG11_PM_B8S_CTRL = 0x25,
	S2MPG11_PM_B8S_OUT1 = 0x26,
	S2MPG11_PM_B8S_OUT2 = 0x27,
	S2MPG11_PM_B9S_CTRL = 0x28,
	S2MPG11_PM_B9S_OUT1 = 0x29,
	S2MPG11_PM_B9S_OUT2 = 0x2A,
	S2MPG11_PM_B10S_CTRL = 0x2B,
	S2MPG11_PM_B10S_OUT = 0x2C,
	S2MPG11_PM_BUCKD_CTRL = 0x2D,
	S2MPG11_PM_BUCKD_OUT = 0x2E,
	S2MPG11_PM_BUCKA_CTRL = 0x2F,
	S2MPG11_PM_BUCKA_OUT = 0x30,
	S2MPG11_PM_BB_CTRL = 0x31,
	S2MPG11_PM_BB_OUT1 = 0x32,
	S2MPG11_PM_BB_OUT2 = 0x33,
	S2MPG11_PM_L1S_CTRL1 = 0x41,
	S2MPG11_PM_L1S_CTRL2 = 0x42,
	S2MPG11_PM_L2S_CTRL1 = 0x43,
	S2MPG11_PM_L2S_CTRL2 = 0x44,
	S2MPG11_PM_L3S_CTRL = 0x45,
	S2MPG11_PM_L4S_CTRL = 0x46,
	S2MPG11_PM_L5S_CTRL = 0x47,
	S2MPG11_PM_L6S_CTRL = 0x48,
	S2MPG11_PM_L7S_CTRL = 0x49,
	S2MPG11_PM_L8S_CTRL = 0x4A,
	S2MPG11_PM_L9S_CTRL = 0x4B,
	S2MPG11_PM_L10S_CTRL = 0x4C,
	S2MPG11_PM_L11S_CTRL = 0x4D,
	S2MPG11_PM_L12S_CTRL = 0x4E,
	S2MPG11_PM_L13S_CTRL = 0x4F,
	S2MPG11_PM_L14S_CTRL = 0x50,
	S2MPG11_PM_L15S_CTRL = 0x51,
	S2MPG11_PM_LDO_CTRL1 = 0x52,
	S2MPG11_PM_DVS_RAMP1 = 0x55,
	S2MPG11_PM_DVS_RAMP2 = 0x56,
	S2MPG11_PM_DVS_RAMP3 = 0x57,
	S2MPG11_PM_DVS_RAMP4 = 0x58,
	S2MPG11_PM_DVS_RAMP5 = 0x59,
	S2MPG11_PM_DVS_RAMP6 = 0x5A,
	S2MPG11_PM_DVS_RAMP7 = 0x5B,
	S2MPG11_PM_DCTRLSEL2 = 0x94,
	S2MPG11_PM_GPIO_CTRL1 = 0x98,
	S2MPG11_PM_GPIO_CTRL2 = 0x99,
	S2MPG11_PM_GPIO_CTRL3 = 0x9A,
	S2MPG11_PM_GPIO_CTRL4 = 0x9B,
	S2MPG11_PM_GPIO_CTRL5 = 0x9C,
	S2MPG11_PM_GPIO_CTRL6 = 0x9D,
	S2MPG11_PM_GPIO_CTRL7 = 0x9E,
	S2MPG11_PM_B2S_OCP_WARN = 0x9F,
	S2MPG11_PM_B2S_SOFT_OCP_WARN = 0xA3,
	S2MPG11_PM_BUCK_OCP_CTRL1 = 0xAB,
	S2MPG11_PM_BUCK_OCP_CTRL2 = 0xAC,
	S2MPG11_PM_BUCK_OCP_CTRL3 = 0xAD,
	S2MPG11_PM_BUCK_OCP_CTRL4 = 0xAE,
	S2MPG11_PM_BUCK_OCP_CTRL5 = 0xAF,
	S2MPG11_PM_BUCK_OCP_CTRL6 = 0xB0,
	S2MPG11_PM_BUCK_OCP_CTRL7 = 0xB1,
	/* TODO : ocp_warn * oi function */
};

/* Meter(0xA) Registers */
enum S2MPG11_METER_REG {
	S2MPG11_METER_CTRL1 = 0x0,
	S2MPG11_METER_CTRL2 = 0x1,
	S2MPG11_METER_CTRL3 = 0x2,
	S2MPG11_METER_CTRL4 = 0x3,
	S2MPG11_METER_CTRL5 = 0x4,
	S2MPG11_METER_BUCKEN1 = 0x5,
	S2MPG11_METER_BUCKEN2 = 0x6,
	S2MPG11_METER_MUXSEL0 = 0x7,
	S2MPG11_METER_MUXSEL1 = 0x8,
	S2MPG11_METER_MUXSEL2 = 0x9,
	S2MPG11_METER_MUXSEL3 = 0xA,
	S2MPG11_METER_MUXSEL4 = 0xB,
	S2MPG11_METER_MUXSEL5 = 0xC,
	S2MPG11_METER_MUXSEL6 = 0xD,
	S2MPG11_METER_MUXSEL7 = 0xE,
	S2MPG11_METER_LPF_C0_0 = 0xF,
	S2MPG11_METER_LPF_C0_1 = 0x10,
	S2MPG11_METER_LPF_C0_2 = 0x11,
	S2MPG11_METER_LPF_C0_3 = 0x12,
	S2MPG11_METER_LPF_C0_4 = 0x13,
	S2MPG11_METER_LPF_C0_5 = 0x14,
	S2MPG11_METER_LPF_C0_6 = 0x15,
	S2MPG11_METER_LPF_C0_7 = 0x16,
	S2MPG11_METER_PWR_WARN0 = 0x1F,
	S2MPG11_METER_PWR_WARN1 = 0x20,
	S2MPG11_METER_PWR_WARN2 = 0x21,
	S2MPG11_METER_PWR_WARN3 = 0x22,
	S2MPG11_METER_PWR_WARN4 = 0x23,
	S2MPG11_METER_PWR_WARN5 = 0x24,
	S2MPG11_METER_PWR_WARN6 = 0x25,
	S2MPG11_METER_PWR_WARN7 = 0x26,
	S2MPG11_METER_NTC_L_WARN0 = 0x27,
	S2MPG11_METER_NTC_L_WARN1 = 0x28,
	S2MPG11_METER_NTC_L_WARN2 = 0x29,
	S2MPG11_METER_NTC_L_WARN3 = 0x2A,
	S2MPG11_METER_NTC_L_WARN4 = 0x2B,
	S2MPG11_METER_NTC_L_WARN5 = 0x2C,
	S2MPG11_METER_NTC_L_WARN6 = 0x2D,
	S2MPG11_METER_NTC_L_WARN7 = 0x2E,
	S2MPG11_METER_NTC_H_WARN0 = 0x2F,
	S2MPG11_METER_NTC_H_WARN1 = 0x30,
	S2MPG11_METER_NTC_H_WARN2 = 0x31,
	S2MPG11_METER_NTC_H_WARN3 = 0x32,
	S2MPG11_METER_NTC_H_WARN4 = 0x33,
	S2MPG11_METER_NTC_H_WARN5 = 0x34,
	S2MPG11_METER_NTC_H_WARN6 = 0x35,
	S2MPG11_METER_NTC_H_WARN7 = 0x36,
	S2MPG11_METER_ACC_DATA_CH0_1 = 0x40,
	S2MPG11_METER_ACC_DATA_CH0_2 = 0x41,
	S2MPG11_METER_ACC_DATA_CH0_3 = 0x42,
	S2MPG11_METER_ACC_DATA_CH0_4 = 0x43,
	S2MPG11_METER_ACC_DATA_CH0_5 = 0x44,
	S2MPG11_METER_ACC_DATA_CH0_6 = 0x45,
	S2MPG11_METER_ACC_DATA_CH1_1 = 0x46,
	S2MPG11_METER_ACC_DATA_CH1_2 = 0x47,
	S2MPG11_METER_ACC_DATA_CH1_3 = 0x48,
	S2MPG11_METER_ACC_DATA_CH1_4 = 0x49,
	S2MPG11_METER_ACC_DATA_CH1_5 = 0x4A,
	S2MPG11_METER_ACC_DATA_CH1_6 = 0x4B,
	S2MPG11_METER_ACC_DATA_CH2_1 = 0x4C,
	S2MPG11_METER_ACC_DATA_CH2_2 = 0x4D,
	S2MPG11_METER_ACC_DATA_CH2_3 = 0x4E,
	S2MPG11_METER_ACC_DATA_CH2_4 = 0x4F,
	S2MPG11_METER_ACC_DATA_CH2_5 = 0x50,
	S2MPG11_METER_ACC_DATA_CH2_6 = 0x51,
	S2MPG11_METER_ACC_DATA_CH3_1 = 0x52,
	S2MPG11_METER_ACC_DATA_CH3_2 = 0x53,
	S2MPG11_METER_ACC_DATA_CH3_3 = 0x54,
	S2MPG11_METER_ACC_DATA_CH3_4 = 0x55,
	S2MPG11_METER_ACC_DATA_CH3_5 = 0x56,
	S2MPG11_METER_ACC_DATA_CH3_6 = 0x57,
	S2MPG11_METER_ACC_DATA_CH4_1 = 0x58,
	S2MPG11_METER_ACC_DATA_CH4_2 = 0x59,
	S2MPG11_METER_ACC_DATA_CH4_3 = 0x5A,
	S2MPG11_METER_ACC_DATA_CH4_4 = 0x5B,
	S2MPG11_METER_ACC_DATA_CH4_5 = 0x5C,
	S2MPG11_METER_ACC_DATA_CH4_6 = 0x5D,
	S2MPG11_METER_ACC_DATA_CH5_1 = 0x5E,
	S2MPG11_METER_ACC_DATA_CH5_2 = 0x5F,
	S2MPG11_METER_ACC_DATA_CH5_3 = 0x60,
	S2MPG11_METER_ACC_DATA_CH5_4 = 0x61,
	S2MPG11_METER_ACC_DATA_CH5_5 = 0x62,
	S2MPG11_METER_ACC_DATA_CH5_6 = 0x63,
	S2MPG11_METER_ACC_DATA_CH6_1 = 0x64,
	S2MPG11_METER_ACC_DATA_CH6_2 = 0x65,
	S2MPG11_METER_ACC_DATA_CH6_3 = 0x66,
	S2MPG11_METER_ACC_DATA_CH6_4 = 0x67,
	S2MPG11_METER_ACC_DATA_CH6_5 = 0x68,
	S2MPG11_METER_ACC_DATA_CH6_6 = 0x69,
	S2MPG11_METER_ACC_DATA_CH7_1 = 0x6A,
	S2MPG11_METER_ACC_DATA_CH7_2 = 0x6B,
	S2MPG11_METER_ACC_DATA_CH7_3 = 0x6C,
	S2MPG11_METER_ACC_DATA_CH7_4 = 0x6D,
	S2MPG11_METER_ACC_DATA_CH7_5 = 0x6E,
	S2MPG11_METER_ACC_DATA_CH7_6 = 0x6F,
	S2MPG11_METER_ACC_COUNT_1 = 0x70,
	S2MPG11_METER_ACC_COUNT_2 = 0x71,
	S2MPG11_METER_ACC_COUNT_3 = 0x72,
	S2MPG11_METER_LPF_DATA_CH0_1 = 0x73,
	S2MPG11_METER_LPF_DATA_CH0_2 = 0x74,
	S2MPG11_METER_LPF_DATA_CH0_3 = 0x75,
	S2MPG11_METER_LPF_DATA_CH1_1 = 0x76,
	S2MPG11_METER_LPF_DATA_CH1_2 = 0x77,
	S2MPG11_METER_LPF_DATA_CH1_3 = 0x78,
	S2MPG11_METER_LPF_DATA_CH2_1 = 0x79,
	S2MPG11_METER_LPF_DATA_CH2_2 = 0x7A,
	S2MPG11_METER_LPF_DATA_CH2_3 = 0x7B,
	S2MPG11_METER_LPF_DATA_CH3_1 = 0x7C,
	S2MPG11_METER_LPF_DATA_CH3_2 = 0x7D,
	S2MPG11_METER_LPF_DATA_CH3_3 = 0x7E,
	S2MPG11_METER_LPF_DATA_CH4_1 = 0x7F,
	S2MPG11_METER_LPF_DATA_CH4_2 = 0x80,
	S2MPG11_METER_LPF_DATA_CH4_3 = 0x81,
	S2MPG11_METER_LPF_DATA_CH5_1 = 0x82,
	S2MPG11_METER_LPF_DATA_CH5_2 = 0x83,
	S2MPG11_METER_LPF_DATA_CH5_3 = 0x84,
	S2MPG11_METER_LPF_DATA_CH6_1 = 0x85,
	S2MPG11_METER_LPF_DATA_CH6_2 = 0x86,
	S2MPG11_METER_LPF_DATA_CH6_3 = 0x87,
	S2MPG11_METER_LPF_DATA_CH7_1 = 0x88,
	S2MPG11_METER_LPF_DATA_CH7_2 = 0x89,
	S2MPG11_METER_LPF_DATA_CH7_3 = 0x8A,
	S2MPG11_METER_LPF_DATA_NTC0_1 = 0x8D,
	S2MPG11_METER_LPF_DATA_NTC0_2 = 0x8E,
	S2MPG11_METER_LPF_DATA_NTC1_1 = 0x8F,
	S2MPG11_METER_LPF_DATA_NTC1_2 = 0x90,
	S2MPG11_METER_LPF_DATA_NTC2_1 = 0x91,
	S2MPG11_METER_LPF_DATA_NTC2_2 = 0x92,
	S2MPG11_METER_LPF_DATA_NTC3_1 = 0x93,
	S2MPG11_METER_LPF_DATA_NTC3_2 = 0x94,
	S2MPG11_METER_LPF_DATA_NTC4_1 = 0x95,
	S2MPG11_METER_LPF_DATA_NTC4_2 = 0x96,
	S2MPG11_METER_LPF_DATA_NTC5_1 = 0x97,
	S2MPG11_METER_LPF_DATA_NTC5_2 = 0x98,
	S2MPG11_METER_LPF_DATA_NTC6_1 = 0x99,
	S2MPG11_METER_LPF_DATA_NTC6_2 = 0x9A,
	S2MPG11_METER_LPF_DATA_NTC7_1 = 0x9B,
	S2MPG11_METER_LPF_DATA_NTC7_2 = 0x9C,
};

/* can be added */
#define S2MPG11_EVT0	0
#define S2MPG11_EVT1	1

/* S2MPG11 regulator ids */
enum S2MPG11_REGULATOR {
	S2MPG11_LDO1,
	S2MPG11_LDO2,
	S2MPG11_LDO3,
	S2MPG11_LDO4,
	S2MPG11_LDO5,
	S2MPG11_LDO6,
	S2MPG11_LDO7,
	S2MPG11_LDO8,
	S2MPG11_LDO9,
	S2MPG11_LDO10,
	S2MPG11_LDO11,
	S2MPG11_LDO12,
	S2MPG11_LDO13,
	S2MPG11_LDO14,
	S2MPG11_LDO15,
	S2MPG11_BUCK1,
	S2MPG11_BUCK2,
	S2MPG11_BUCK3,
	S2MPG11_BUCK4,
	S2MPG11_BUCK5,
	S2MPG11_BUCK6,
	S2MPG11_BUCK7,
	S2MPG11_BUCK8,
	S2MPG11_BUCK9,
	S2MPG11_BUCK10,
	S2MPG11_BUCKD,
	S2MPG11_BUCKA,
	S2MPG11_BUCKBOOST,
	S2MPG11_REGULATOR_MAX,
};

#define S2MPG11_BUCK_MAX 12
#define S2MPG11_LDO_MAX 15
#define S2MPG11_BB_MAX 1

/* Unit : uV */
#define S2MPG11_REG_MIN1 200000 /* BUCK1S~6S, BUCK8S~10S */
#define S2MPG11_REG_STEP1 6250
#define S2MPG11_REG_MIN2 600000 /* BUCK7S,D,A */
#define S2MPG11_REG_STEP2 12500
#define S2MPG11_REG_MIN3 2600000 /* BUCKBOOST */
#define S2MPG11_REG_STEP3 12500
#define S2MPG11_REG_MIN4 300000 /* LDO1S,2S */
#define S2MPG11_REG_STEP4 12500
#define S2MPG11_REG_MIN5 725000 /* LDO9S */
#define S2MPG11_REG_STEP5 12500
#define S2MPG11_REG_MIN6 700000 /* LDO3S,7S,10S~12S,14S,15S */
#define S2MPG11_REG_STEP6 25000
#define S2MPG11_REG_MIN7 1800000 /* LDO4S,6S,13S */
#define S2MPG11_REG_STEP7 25000
#define S2MPG11_REG_MIN8 1600000 /* LDO5S */
#define S2MPG11_REG_STEP8 12500
#define S2MPG11_REG_MIN9 977000 /* LDO8S */
#define S2MPG11_REG_STEP9 5800

#define S2MPG11_REG_N_VOLTAGES_64 0x40
#define S2MPG11_REG_N_VOLTAGES_128 0x80
#define S2MPG11_REG_N_VOLTAGES_256 0x100

#define S2MPG11_REG_ENABLE_MASK_1_0	(0x3 << 0)
#define S2MPG11_REG_ENABLE_MASK_3_2	(0x3 << 2)
#define S2MPG11_REG_ENABLE_MASK_4_3	(0x3 << 3)
#define S2MPG11_REG_ENABLE_MASK_5_4	(0x3 << 4)
#define S2MPG11_REG_ENABLE_MASK_7_6	(0x3 << 6)
#define S2MPG11_REG_ENABLE_MASK_7	(0x1 << 7)

#define S2MPG11_ENABLE_TIME_LDO 128
#define S2MPG11_ENABLE_TIME_BUCK 130

#define DCTRLSEL_HPM 0x0
#define DCTRLSEL_PWREN 0x1
#define DCTRLSEL_PWREN_TRG 0x2
#define DCTRLSEL_PWREN_MIF 0x3
#define DCTRLSEL_PWREN_MIF_TRG 0x4
#define DCTRLSEL_AP_ACTIVE_N 0x5
#define DCTRLSEL_AP_ACTIVE_N_TRG 0x6
#define DCTRLSEL_CPUCL1 0x7
#define DCTRLSEL_CPUCL1_PWREN 0x8
#define DCTRLSEL_CPUCL2 0x9
#define DCTRLSEL_CPUCL2_PWREN 0xa
#define DCTRLSEL_TPU_EN 0xb
#define DCTRLSEL_TPU_EN_AP_ACTIVE_N 0xc

/* S2MPG11_PM_OCP_WARN */
#define S2MPG11_OCP_WARN_EN_SHIFT 7
#define S2MPG11_OCP_WARN_CNT_SHIFT 6
#define S2MPG11_OCP_WARN_DVS_MASK_SHIFT 5
#define S2MPG11_OCP_WARN_LVL_SHIFT 0

enum s2mpg11_irq {
	/* PMIC */
	S2MPG11_IRQ_PWRONF_INT1,
	S2MPG11_IRQ_PWRONR_INT1,
	S2MPG11_IRQ_PIF_TIMEOUTS_INT1,
	S2MPG11_IRQ_WTSR_INT1,
	S2MPG11_IRQ_SPD_PARITY_ERR_INT1,
	S2MPG11_IRQ_SPD_ABNORMAL_STOP_INT1,

	S2MPG11_IRQ_INT120C_INT2,
	S2MPG11_IRQ_INT140C_INT2,
	S2MPG11_IRQ_TSD_INT2,
	S2MPG11_IRQ_UV_BB_INT2,
	S2MPG11_IRQ_BB_NTR_DET_INT2,
	S2MPG11_IRQ_WRST_INT2,
	S2MPG11_IRQ_NTC_CYCLE_DONE_INT2,
	S2MPG11_IRQ_PMETER_OVERF_INT2,

	S2MPG11_IRQ_OCP_B1S_INT3,
	S2MPG11_IRQ_OCP_B2S_INT3,
	S2MPG11_IRQ_OCP_B3S_INT3,
	S2MPG11_IRQ_OCP_B4S_INT3,
	S2MPG11_IRQ_OCP_B5S_INT3,
	S2MPG11_IRQ_OCP_B6S_INT3,
	S2MPG11_IRQ_OCP_B7S_INT3,
	S2MPG11_IRQ_OCP_B8S_INT3,

	S2MPG11_IRQ_OCP_B9S_INT4,
	S2MPG11_IRQ_OCP_B10S_INT4,
	S2MPG11_IRQ_OCP_BDS_INT4,
	S2MPG11_IRQ_OCP_BAS_INT4,
	S2MPG11_IRQ_OCP_BBS_INT4,
	S2MPG11_IRQ_WLWP_ACC_INT4,
	S2MPG11_IRQ_SPD_SRP_PKT_RST_INT4,

	S2MPG11_IRQ_PWR_WARN_CH1_INT5,
	S2MPG11_IRQ_PWR_WARN_CH2_INT5,
	S2MPG11_IRQ_PWR_WARN_CH3_INT5,
	S2MPG11_IRQ_PWR_WARN_CH4_INT5,
	S2MPG11_IRQ_PWR_WARN_CH5_INT5,
	S2MPG11_IRQ_PWR_WARN_CH6_INT5,
	S2MPG11_IRQ_PWR_WARN_CH7_INT5,
	S2MPG11_IRQ_PWR_WARN_CH8_INT5,

	S2MPG11_IRQ_NTC_WARN_CH1_INT6,
	S2MPG11_IRQ_NTC_WARN_CH2_INT6,
	S2MPG11_IRQ_NTC_WARN_CH3_INT6,
	S2MPG11_IRQ_NTC_WARN_CH4_INT6,
	S2MPG11_IRQ_NTC_WARN_CH5_INT6,
	S2MPG11_IRQ_NTC_WARN_CH6_INT6,
	S2MPG11_IRQ_NTC_WARN_CH7_INT6,
	S2MPG11_IRQ_NTC_WARN_CH8_INT6,

	S2MPG11_IRQ_NR,
};

#define S2MPG11_METER_NTC_BUF 2 /* 12-bit */

#endif /* __LINUX_MFD_S2MPG11_REGISTER_H */
