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
#define LPTICKER_DELAY_TICKS                                        1                                                                              // set by target:FAMILY_STM32
#define MBED_CONF_ATMEL_RF_ASSUME_SPACED_SPI                        1                                                                              // set by library:atmel-rf[STM]
#define MBED_CONF_ATMEL_RF_FULL_SPI_SPEED                           7500000                                                                        // set by library:atmel-rf
#define MBED_CONF_ATMEL_RF_FULL_SPI_SPEED_BYTE_SPACING              250                                                                            // set by library:atmel-rf
#define MBED_CONF_ATMEL_RF_IRQ_THREAD_STACK_SIZE                    1024                                                                           // set by library:atmel-rf
#define MBED_CONF_ATMEL_RF_LOW_SPI_SPEED                            3750000                                                                        // set by library:atmel-rf
#define MBED_CONF_ATMEL_RF_PROVIDE_DEFAULT                          0                                                                              // set by library:atmel-rf
#define MBED_CONF_ATMEL_RF_USE_SPI_SPACING_API                      0                                                                              // set by library:atmel-rf
#define MBED_CONF_CELLULAR_DEBUG_AT                                 0                                                                              // set by library:cellular
#define MBED_CONF_CELLULAR_RANDOM_MAX_START_DELAY                   0                                                                              // set by library:cellular
#define MBED_CONF_CELLULAR_USE_APN_LOOKUP                           1                                                                              // set by library:cellular
#define MBED_CONF_DRIVERS_UART_SERIAL_RXBUF_SIZE                    256                                                                            // set by library:drivers
#define MBED_CONF_DRIVERS_UART_SERIAL_TXBUF_SIZE                    256                                                                            // set by library:drivers
#define MBED_CONF_ESP8266_DEBUG                                     0                                                                              // set by library:esp8266
#define MBED_CONF_ESP8266_PROVIDE_DEFAULT                           0                                                                              // set by library:esp8266
#define MBED_CONF_ESP8266_SOCKET_BUFSIZE                            8192                                                                           // set by library:esp8266
#define MBED_CONF_EVENTS_PRESENT                                    1                                                                              // set by library:events
#define MBED_CONF_EVENTS_SHARED_DISPATCH_FROM_APPLICATION           0                                                                              // set by library:events
#define MBED_CONF_EVENTS_SHARED_EVENTSIZE                           256                                                                            // set by library:events
#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_EVENTSIZE                  256                                                                            // set by library:events
#define MBED_CONF_EVENTS_SHARED_HIGHPRIO_STACKSIZE                  1024                                                                           // set by library:events
#define MBED_CONF_EVENTS_SHARED_STACKSIZE                           2048                                                                           // set by library:events
#define MBED_CONF_EVENTS_USE_LOWPOWER_TIMER_TICKER                  0                                                                              // set by library:events
#define MBED_CONF_FILESYSTEM_PRESENT                                1                                                                              // set by library:filesystem
#define MBED_CONF_FLASHIAP_BLOCK_DEVICE_BASE_ADDRESS                0xFFFFFFFF                                                                     // set by library:flashiap-block-device
#define MBED_CONF_FLASHIAP_BLOCK_DEVICE_SIZE                        0                                                                              // set by library:flashiap-block-device
#define MBED_CONF_LWIP_ADDR_TIMEOUT                                 5                                                                              // set by library:lwip
#define MBED_CONF_LWIP_ADDR_TIMEOUT_MODE                            1                                                                              // set by library:lwip
#define MBED_CONF_LWIP_DEBUG_ENABLED                                0                                                                              // set by library:lwip
#define MBED_CONF_LWIP_DEFAULT_THREAD_STACKSIZE                     512                                                                            // set by library:lwip
#define MBED_CONF_LWIP_ENABLE_PPP_TRACE                             0                                                                              // set by library:lwip
#define MBED_CONF_LWIP_ETHERNET_ENABLED                             1                                                                              // set by library:lwip
#define MBED_CONF_LWIP_IPV4_ENABLED                                 1                                                                              // set by library:lwip
#define MBED_CONF_LWIP_IPV6_ENABLED                                 0                                                                              // set by library:lwip
#define MBED_CONF_LWIP_IP_VER_PREF                                  4                                                                              // set by library:lwip
#define MBED_CONF_LWIP_MEM_SIZE                                     25600                                                                          // set by library:lwip[STM]
#define MBED_CONF_LWIP_PPP_THREAD_STACKSIZE                         768                                                                            // set by library:lwip
#define MBED_CONF_LWIP_SOCKET_MAX                                   4                                                                              // set by library:lwip
#define MBED_CONF_LWIP_TCPIP_THREAD_STACKSIZE                       1200                                                                           // set by library:lwip
#define MBED_CONF_LWIP_TCP_ENABLED                                  1                                                                              // set by library:lwip
#define MBED_CONF_LWIP_TCP_MAXRTX                                   6                                                                              // set by library:lwip
#define MBED_CONF_LWIP_TCP_SERVER_MAX                               4                                                                              // set by library:lwip
#define MBED_CONF_LWIP_TCP_SOCKET_MAX                               4                                                                              // set by library:lwip
#define MBED_CONF_LWIP_UDP_SOCKET_MAX                               4                                                                              // set by library:lwip
#define MBED_CONF_LWIP_USE_MBED_TRACE                               0                                                                              // set by library:lwip
#define MBED_CONF_MCR20A_PROVIDE_DEFAULT                            0                                                                              // set by library:mcr20a
#define MBED_CONF_NSAPI_DEFAULT_MESH_TYPE                           THREAD                                                                         // set by library:nsapi
#define MBED_CONF_NSAPI_DEFAULT_STACK                               LWIP                                                                           // set by library:nsapi
#define MBED_CONF_NSAPI_DEFAULT_WIFI_SECURITY                       NONE                                                                           // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_CACHE_SIZE                              3                                                                              // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_RESPONSE_WAIT_TIME                      5000                                                                           // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_RETRIES                                 0                                                                              // set by library:nsapi
#define MBED_CONF_NSAPI_DNS_TOTAL_ATTEMPTS                          3                                                                              // set by library:nsapi
#define MBED_CONF_NSAPI_PRESENT                                     1                                                                              // set by library:nsapi
#define MBED_CONF_NSAPI_SOCKET_STATS_ENABLE                         0                                                                              // set by library:nsapi
#define MBED_CONF_NSAPI_SOCKET_STATS_MAX_COUNT                      10                                                                             // set by library:nsapi
#define MBED_CONF_PLATFORM_CRASH_CAPTURE_ENABLED                    0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_CTHUNK_COUNT_MAX                         8                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE                 9600                                                                           // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_ALL_THREADS_INFO                   0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_DECODE_HTTP_URL_STR                "\nFor more info, visit: https://armmbed.github.io/mbedos-error/?error=0x%08X" // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_FILENAME_CAPTURE_ENABLED           0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_HIST_ENABLED                       0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_HIST_SIZE                          4                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_ERROR_REBOOT_MAX                         1                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_FATAL_ERROR_AUTO_REBOOT_ENABLED          0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_FORCE_NON_COPYABLE_ERROR                 0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_MAX_ERROR_FILENAME_LEN                   16                                                                             // set by library:platform
#define MBED_CONF_PLATFORM_POLL_USE_LOWPOWER_TIMER                  0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BAUD_RATE                          9600                                                                           // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_BUFFERED_SERIAL                    0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_NEWLINES                   0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_CONVERT_TTY_NEWLINES               0                                                                              // set by library:platform
#define MBED_CONF_PLATFORM_STDIO_FLUSH_AT_EXIT                      0                                                                              // set by application[*]
#define MBED_CONF_PLATFORM_USE_MPU                                  1                                                                              // set by library:platform
#define MBED_CONF_PPP_CELL_IFACE_APN_LOOKUP                         1                                                                              // set by library:ppp-cell-iface
#define MBED_CONF_PPP_CELL_IFACE_AT_PARSER_BUFFER_SIZE              256                                                                            // set by library:ppp-cell-iface
#define MBED_CONF_PPP_CELL_IFACE_AT_PARSER_TIMEOUT                  8000                                                                           // set by library:ppp-cell-iface
#define MBED_CONF_PPP_CELL_IFACE_BAUD_RATE                          115200                                                                         // set by library:ppp-cell-iface
#define MBED_CONF_RTOS_IDLE_THREAD_STACK_SIZE                       512                                                                            // set by library:rtos
#define MBED_CONF_RTOS_IDLE_THREAD_STACK_SIZE_TICKLESS_EXTRA        256                                                                            // set by library:rtos
#define MBED_CONF_RTOS_MAIN_THREAD_STACK_SIZE                       4096                                                                           // set by library:rtos
#define MBED_CONF_RTOS_PRESENT                                      1                                                                              // set by library:rtos
#define MBED_CONF_RTOS_THREAD_STACK_SIZE                            4096                                                                           // set by library:rtos
#define MBED_CONF_RTOS_TIMER_THREAD_STACK_SIZE                      768                                                                            // set by library:rtos
#define MBED_CONF_S2LP_PROVIDE_DEFAULT                              0                                                                              // set by library:s2lp
#define MBED_CONF_SD_CMD0_IDLE_STATE_RETRIES                        5                                                                              // set by library:sd
#define MBED_CONF_SD_CMD_TIMEOUT                                    10000                                                                          // set by library:sd
#define MBED_CONF_SD_CRC_ENABLED                                    1                                                                              // set by library:sd
#define MBED_CONF_SD_FSFAT_SDCARD_INSTALLED                         1                                                                              // set by library:sd
#define MBED_CONF_SD_INIT_FREQUENCY                                 100000                                                                         // set by library:sd
#define MBED_CONF_SD_SPI_CLK                                        D13                                                                            // set by library:sd[UBLOX_C030]
#define MBED_CONF_SD_SPI_CS                                         D10                                                                            // set by library:sd[UBLOX_C030]
#define MBED_CONF_SD_SPI_MISO                                       D12                                                                            // set by library:sd[UBLOX_C030]
#define MBED_CONF_SD_SPI_MOSI                                       D11                                                                            // set by library:sd[UBLOX_C030]
#define MBED_CONF_STORAGE_DEFAULT_KV                                kv                                                                             // set by library:storage
#define MBED_CONF_STORAGE_FILESYSTEM_BLOCKDEVICE                    default                                                                        // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_EXTERNAL_BASE_ADDRESS          0                                                                              // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_EXTERNAL_SIZE                  0                                                                              // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_FILESYSTEM                     default                                                                        // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_FOLDER_PATH                    kvstore                                                                        // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_INTERNAL_BASE_ADDRESS          0                                                                              // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_MOUNT_POINT                    kv                                                                             // set by library:storage_filesystem
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_BLOCKDEVICE             default                                                                        // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_EXTERNAL_BASE_ADDRESS   0                                                                              // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_EXTERNAL_SIZE           0                                                                              // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_FILESYSTEM              default                                                                        // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_FOLDER_PATH             kvstore                                                                        // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_NO_RBP_MOUNT_POINT             kv                                                                             // set by library:storage_filesystem_no_rbp
#define MBED_CONF_STORAGE_FILESYSTEM_RBP_INTERNAL_SIZE              0                                                                              // set by library:storage_filesystem
#define MBED_CONF_STORAGE_STORAGE_TYPE                              default                                                                        // set by library:storage
#define MBED_CONF_STORAGE_TDB_EXTERNAL_BLOCKDEVICE                  default                                                                        // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_EXTERNAL_EXTERNAL_BASE_ADDRESS        0                                                                              // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_EXTERNAL_EXTERNAL_SIZE                0                                                                              // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_EXTERNAL_INTERNAL_BASE_ADDRESS        0                                                                              // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_EXTERNAL_NO_RBP_BLOCKDEVICE           default                                                                        // set by library:storage_tdb_external_no_rbp
#define MBED_CONF_STORAGE_TDB_EXTERNAL_NO_RBP_EXTERNAL_BASE_ADDRESS 0                                                                              // set by library:storage_tdb_external_no_rbp
#define MBED_CONF_STORAGE_TDB_EXTERNAL_NO_RBP_EXTERNAL_SIZE         0                                                                              // set by library:storage_tdb_external_no_rbp
#define MBED_CONF_STORAGE_TDB_EXTERNAL_RBP_INTERNAL_SIZE            0                                                                              // set by library:storage_tdb_external
#define MBED_CONF_STORAGE_TDB_INTERNAL_INTERNAL_BASE_ADDRESS        0                                                                              // set by library:storage_tdb_internal
#define MBED_CONF_STORAGE_TDB_INTERNAL_INTERNAL_SIZE                0                                                                              // set by library:storage_tdb_internal
#define MBED_CONF_TARGET_BOOT_STACK_SIZE                            0x400                                                                          // set by library:rtos[*]
#define MBED_CONF_TARGET_DEEP_SLEEP_LATENCY                         3                                                                              // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_LPTICKER_LPTIM_CLOCK                       1                                                                              // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_LPUART_CLOCK_SOURCE                        USE_LPUART_CLK_LSE|USE_LPUART_CLK_PCLK1                                        // set by target:FAMILY_STM32
#define MBED_CONF_TARGET_LSE_AVAILABLE                              0                                                                              // set by target:UBLOX_C030
#define MBED_CONF_TARGET_MPU_ROM_END                                0x0fffffff                                                                     // set by target:Target
#define MBED_CONF_TARGET_NETWORK_DEFAULT_INTERFACE_TYPE             ETHERNET                                                                       // set by target:UBLOX_C030
#define MBED_LFS_BLOCK_SIZE                                         512                                                                            // set by library:littlefs
#define MBED_LFS_ENABLE_INFO                                        0                                                                              // set by library:littlefs
#define MBED_LFS_INTRINSICS                                         1                                                                              // set by library:littlefs
#define MBED_LFS_LOOKAHEAD                                          512                                                                            // set by library:littlefs
#define MBED_LFS_PROG_SIZE                                          64                                                                             // set by library:littlefs
#define MBED_LFS_READ_SIZE                                          64                                                                             // set by library:littlefs
#define MEM_ALLOC                                                   malloc                                                                         // set by library:mbed-trace
#define MEM_FREE                                                    free                                                                           // set by library:mbed-trace
#define MODEM_ON_BOARD                                              1                                                                              // set by target:UBLOX_C030
#define MODEM_ON_BOARD_UART                                         1                                                                              // set by target:UBLOX_C030
#define NSAPI_PPP_AVAILABLE                                         0                                                                              // set by library:lwip
#define NSAPI_PPP_IPV4_AVAILABLE                                    1                                                                              // set by library:lwip
#define NSAPI_PPP_IPV6_AVAILABLE                                    0                                                                              // set by library:lwip
#define NVSTORE_ENABLED                                             1                                                                              // set by library:nvstore
#define NVSTORE_MAX_KEYS                                            16                                                                             // set by library:nvstore
// Macros
#define MBEDTLS_CIPHER_MODE_CTR                                                                                                                    // defined by library:SecureStore
#define MBEDTLS_CMAC_C                                                                                                                             // defined by library:SecureStore
#define UNITY_INCLUDE_CONFIG_H                                                                                                                     // defined by library:utest
#define _RTE_                                                                                                                                      // defined by library:rtos

#endif
