/*
 * adc_registers.h
 *
 *  Created on: 31 dec. 2022
 *      Author: Ludo
 */

#ifndef __ADC_REGISTERS_H__
#define __ADC_REGISTERS_H__

#ifndef STM32G4XX_REGISTERS_DISABLE_FLAGS_FILE
#include "stm32g4xx_registers_flags.h"
#endif
#include "types.h"

/*** ADC REGISTERS macros ***/

// Peripherals base address.
#define ADC1                        ((ADC_registers_t*) ((uint32_t) 0x50000000))
#define ADC2                        ((ADC_registers_t*) ((uint32_t) 0x50000100))
#define ADCCR12                     ((ADCCR_registers_t*) ((uint32_t) 0x50000300))
#if ((STM32G4XX_REGISTERS_MCU_CATEGORY == 3) || (STM32G4XX_REGISTERS_MCU_CATEGORY == 4))
#define ADC3                        ((ADC_registers_t*) ((uint32_t) 0x50000400))
#endif
#if (STM32G4XX_REGISTERS_MCU_CATEGORY == 3)
#define ADC4                        ((ADC_registers_t*) ((uint32_t) 0x50000500))
#define ADC5                        ((ADC_registers_t*) ((uint32_t) 0x50000600))
#endif
#if ((STM32G4XX_REGISTERS_MCU_CATEGORY == 3) || (STM32G4XX_REGISTERS_MCU_CATEGORY == 4))
#define ADCCR345                    ((ADCCR_registers_t*) ((uint32_t) 0x50000700))
#endif
// Temperature sensor calibration values.
#define ADC_TS_VCC_CALIB_MV         ((int32_t) 3000)
#define ADC_TS_CAL1_ADDR            ((uint16_t*) ((uint32_t) 0x1FFF75A8))
#define ADC_TS_CAL1                 ((int32_t) (*ADC_TS_CAL1_ADDR))
#define ADC_TS_CAL1_TEMP            ((int32_t) 30)
#define ADC_TS_CAL2_ADDR            ((uint16_t*) ((uint32_t) 0x1FFF75CA))
#define ADC_TS_CAL2                 ((int32_t) (*ADC_TS_CAL2_ADDR))
#define ADC_TS_CAL2_TEMP            ((int32_t) 130)
// Internal voltage reference calibration values.
#define ADC_VREFINT_VCC_CALIB_MV    ((int32_t) 3000)
#define ADC_VREFINT_CAL_ADDR        ((uint16_t*) ((uint32_t) 0x1FFF75AA))
#define ADC_VREFINT_CAL             ((int32_t) (*ADC_VREFINT_CAL_ADDR))

/*** ADC REGISTERS structures ***/

/*!******************************************************************
 * \enum ADC_registers_t
 * \brief ADC registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t ISR;
    volatile uint32_t IER;
    volatile uint32_t CR;
    volatile uint32_t CFGR;
    volatile uint32_t CFGR2;
    volatile uint32_t SMPR1;
    volatile uint32_t SMPR2;
    volatile uint32_t RESERVED0;
    volatile uint32_t TR1;
    volatile uint32_t TR2;
    volatile uint32_t TR3;
    volatile uint32_t RESERVED1;
    union {
        struct {
            volatile uint32_t SQR1;
            volatile uint32_t SQR2;
            volatile uint32_t SQR3;
            volatile uint32_t SQR4;
        };
        volatile uint32_t SQR[4];
    };
    volatile uint32_t DR;
    volatile uint32_t RESERVED2[2];
    volatile uint32_t JSQR;
    volatile uint32_t RESERVED3[4];
    union {
        struct {
            volatile uint32_t OFR1;
            volatile uint32_t OFR2;
            volatile uint32_t OFR3;
            volatile uint32_t OFR4;
        };
        volatile uint32_t OFR[4];
    };
    volatile uint32_t RESERVED4[4];
    union {
        struct {
            volatile uint32_t JDR1;
            volatile uint32_t JDR2;
            volatile uint32_t JDR3;
            volatile uint32_t JDR4;
        };
        volatile uint32_t JQR[4];
    };
    volatile uint32_t RESERVED5[4];
    volatile uint32_t AWD2CR;
    volatile uint32_t AWD3CR;
    volatile uint32_t RESERVED6[2];
    volatile uint32_t DIFSEL;
    volatile uint32_t CALFACT;
    volatile uint32_t RESERVED7[2];
    volatile uint32_t GCOMP;
} ADC_registers_t;

/*!******************************************************************
 * \enum ADCCR_registers_t
 * \brief ADC common registers map.
 *******************************************************************/
typedef struct {
    volatile uint32_t CSR;
    volatile uint32_t RESERVED;
    volatile uint32_t CCR;
    volatile uint32_t CDR;
} ADCCR_registers_t;

#endif /* __ADC_REGISTERS_H__ */
