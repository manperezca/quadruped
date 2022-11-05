/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file Sample app to demonstrate PWM-based servomotor control
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/device.h>
#include <zephyr/drivers/pwm.h> /* Acá se encuentran las funciones usadas en este ejemplo. Las funciones están documentadas en: https://docs.zephyrproject.org/latest/hardware/peripherals/pwm.html# */

static const struct pwm_dt_spec servo_a = PWM_DT_SPEC_GET(DT_NODELABEL(servo0));
static const uint32_t min_pulse = DT_PROP(DT_NODELABEL(servo0), min_pulse);
static const uint32_t max_pulse = DT_PROP(DT_NODELABEL(servo0), max_pulse);

static const struct pwm_dt_spec servo_b = PWM_DT_SPEC_GET(DT_NODELABEL(servo1));
static const uint32_t min_pulso = DT_PROP(DT_NODELABEL(servo1), min_pulse);
static const uint32_t max_pulso = DT_PROP(DT_NODELABEL(servo1), max_pulse);


#define STEP PWM_USEC(25)
#define STEP_TIME K_MSEC(50) // Tiempo por paso (Solo requerido para este ejemplo de barrido

enum direction {
	DOWN,
	UP,
};

void main(void)
{
	uint32_t pulse_width = min_pulse;
	
	uint32_t pulse_width1 = min_pulso;
	
	enum direction dir_a = UP;
	enum direction dir_b = UP;
	
	int ret_a;
	int ret_b;

	printk("Servomotor control\n");

	if (!device_is_ready(servo_a.dev)) {
		printk("Error: PWM device %s is not ready\n", servo_a.dev->name);
		return;
	}

	while (1) {
		ret_a = pwm_set_pulse_dt(&servo_a, pulse_width);
		ret_b = pwm_set_pulse_dt(&servo_b, pulse_width1);
		if (ret_a < 0 ) {
			printk("Error %d: failed to set pulse width\n", ret_a);
			return;
		}
		
		if (ret_b < 0) {
			printk("Error %d: failed to set pulse width\n", ret_b);
			return;
		}


		if (dir_a == DOWN) {
			if (pulse_width <= min_pulse) {
				dir_a = UP;
				pulse_width = min_pulse;
			} else {
				pulse_width -= STEP;
			}
		} else {
			pulse_width += STEP;

			if (pulse_width >= max_pulse) {
				dir_a = DOWN;
				pulse_width = max_pulse;
			}
		}
		
		if (dir_b == DOWN) {
			if (pulse_width1 <= min_pulse) {
				dir_b = UP;
				pulse_width1 = min_pulse;
			} else {
				pulse_width1 -= STEP;
			}
		} else {
			pulse_width1 += STEP;
	
			if (pulse_width1 >= max_pulse) {
				dir_b = DOWN;
				pulse_width1 = max_pulse;
			}
		}

		k_sleep(STEP_TIME);
	}
	
	
	
}
