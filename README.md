# Description

This repository contains the **registers address** definition of the STM32G4xx MCUs peripherals.

# Dependencies

The driver relies on:

* An external `types.h` header file defining the **standard C types** of the targeted MCU.

# Compilation flags

| **Flag name** | **Value** | **Description** |
|:---:|:---:|:---:|
| `STM32G4XX_REGISTERS_DISABLE_FLAGS_FILE` | `defined` / `undefined` | Disable the `stm32g4xx_registers_flags.h` header file inclusion when compilation flags are given in the project settings or by command line. |
| `STM32G4XX_REGISTERS_MCU_CATEGORY` | `2` / `3` / `4` | Defines the MCU category to configure memories size and peripherals availability. |
