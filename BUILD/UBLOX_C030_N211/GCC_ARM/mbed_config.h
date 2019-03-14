/*
 * mbed SDK
 * Copyright (c) 2017 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// Automatically generated configuration file.
// DO NOT EDIT, content will be overwritten.

#ifndef __MBED_CONFIG_DATA__
#define __MBED_CONFIG_DATA__

// Configuration parameters
#define LPTICKER_DELAY_TICKS                            1                                       // set by target:FAMILY_STM32
#define MBED_CONF_DRIVERS_UART_SERIAL_RXBUF_SIZE        256                                     // set by library:drivers
#define MBED_CONF_DRIVERS_UART_SERIAL_TXBUF_SIZE        256                                     // set by library:drivers
#define MBED_CONF_FILESYSTEM_PRESENT                    1                                       // set by library:filesystem
#define MBED_CONF_FLASHIAP_BLOCK_DEVICE_BASE_ADDRESS    0xFFFFFFFF                              // set by library:flashiap-block-device
#define MBED_CONF_FLASHIAP_BLOCK_DEVICE_SIZE            0                                       // set by library:flashiap-block-device
#define MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE     9600                                    // set by library:platform
#define MBED_CONF_PLATFORM_FORCE_NON_COPYABLE_ERROR     0                                       // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BAUD_RATE              9600                                    // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BUFFERED_SERIAL        0                                       // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_NEWLINES       0                                       // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_TTY_NEWLINES   0                                       // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_FLUSH_AT_EXIT          0                                       // set by application[*]
#define MBED_CONF_SD_CMD0_IDLE_STATE_RETRIES            5                                       // set by library:sd
#define MBED_CONF_SD_CMD_TIMEOUT                        5000                                    // set by library:sd
#define MBED_CONF_SD_DEVICE_SPI                         1                                       // set by library:sd
#define MBED_CONF_SD_FSFAT_SDCARD_INSTALLED             1                                       // set by library:sd
#define MBED_CONF_SD_SD_INIT_FREQUENCY                  100000                                  // set by library:sd
#define MBED_CONF_SD_SPI_CLK                            D13                                     // set by library:sd
#define MBED_CONF_SD_SPI_CS                             D10                                     // set by library:sd
#define MBED_CONF_SD_SPI_MISO                           D12                                     // set by library:sd
#define MBED_CONF_SD_SPI_MOSI                           D11                                     // set by library:sd
#define MBED_CONF_TARGET_BOOT_STACK_SIZE                0x1000                                  // set by target:Target
#define MBED_CONF_TARGET_DEEP_SLEEP_LATENCY             3                                       // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_LPTICKER_LPTIM_CLOCK           1                                       // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_LPUART_CLOCK_SOURCE            USE_LPUART_CLK_LSE|USE_LPUART_CLK_PCLK1 // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_LSE_AVAILABLE                  0                                       // set by target:UBLOX_C030
#define MBED_CONF_TARGET_MPU_ROM_END                    0x0fffffff                              // set by target:Target
#define MBED_CONF_TARGET_NETWORK_DEFAULT_INTERFACE_TYPE ETHERNET                                // set by target:UBLOX_C030
#define MBED_LFS_BLOCK_SIZE                             512                                     // set by library:littlefs
#define MBED_LFS_ENABLE_INFO                            0                                       // set by library:littlefs
#define MBED_LFS_INTRINSICS                             1                                       // set by library:littlefs
#define MBED_LFS_LOOKAHEAD                              512                                     // set by library:littlefs
#define MBED_LFS_PROG_SIZE                              64                                      // set by library:littlefs
#define MBED_LFS_READ_SIZE                              64                                      // set by library:littlefs
#define MODEM_ON_BOARD                                  1                                       // set by target:UBLOX_C030
#define MODEM_ON_BOARD_UART                             1                                       // set by target:UBLOX_C030

#endif
