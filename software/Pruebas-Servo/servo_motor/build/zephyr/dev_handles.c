#include <zephyr/device.h>
#include <zephyr/toolchain.h>

/* 1 : /soc/rtc@3ff48000:
 * Supported:
 *    - /soc/uart@3ff40000
 *    - /soc/ledc@3ff59000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_rtc_3ff48000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 4, 5, DEVICE_HANDLE_ENDS };

/* 2 : /soc/gpio/gpio@3ff44800:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_S_gpio_3ff44800[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 3 : /soc/gpio/gpio@3ff44000:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_gpio_S_gpio_3ff44000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 4 : /soc/uart@3ff40000:
 * Direct Dependencies:
 *    - /soc/rtc@3ff48000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_uart_3ff40000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/ledc@3ff59000:
 * Direct Dependencies:
 *    - /soc/rtc@3ff48000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_ledc_3ff59000[] = { 1, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
