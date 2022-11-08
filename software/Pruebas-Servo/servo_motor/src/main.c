
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

static const struct pwm_dt_spec servo_c = PWM_DT_SPEC_GET(DT_NODELABEL(servo2));
static const uint32_t min_puls2 = DT_PROP(DT_NODELABEL(servo2), min_pulse);
static const uint32_t max_puls2 = DT_PROP(DT_NODELABEL(servo2), max_pulse);

static const struct pwm_dt_spec servo_d = PWM_DT_SPEC_GET(DT_NODELABEL(servo3));
static const uint32_t min_puls3 = DT_PROP(DT_NODELABEL(servo3), min_pulse);
static const uint32_t max_puls3 = DT_PROP(DT_NODELABEL(servo3), max_pulse);

static const struct pwm_dt_spec servo_e = PWM_DT_SPEC_GET(DT_NODELABEL(servo4));
static const uint32_t min_puls4 = DT_PROP(DT_NODELABEL(servo4), min_pulse);
static const uint32_t max_puls4 = DT_PROP(DT_NODELABEL(servo4), max_pulse);

static const struct pwm_dt_spec servo_f = PWM_DT_SPEC_GET(DT_NODELABEL(servo5));
static const uint32_t min_puls5 = DT_PROP(DT_NODELABEL(servo5), min_pulse);
static const uint32_t max_puls5 = DT_PROP(DT_NODELABEL(servo5), max_pulse);

static const struct pwm_dt_spec servo_g = PWM_DT_SPEC_GET(DT_NODELABEL(servo6));
static const uint32_t min_puls6 = DT_PROP(DT_NODELABEL(servo6), min_pulse);
static const uint32_t max_puls6 = DT_PROP(DT_NODELABEL(servo6), max_pulse);

static const struct pwm_dt_spec servo_h = PWM_DT_SPEC_GET(DT_NODELABEL(servo7));
static const uint32_t min_puls7 = DT_PROP(DT_NODELABEL(servo7), min_pulse);
static const uint32_t max_puls7 = DT_PROP(DT_NODELABEL(servo7), max_pulse);


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
	uint32_t pulse_width2 = min_puls2;
	uint32_t pulse_width3 = min_puls3;
	uint32_t pulse_width4 = min_puls4;
	uint32_t pulse_width5 = min_puls5;
	uint32_t pulse_width6 = min_puls6;
	uint32_t pulse_width7 = min_puls7;
	
	enum direction dir_a = UP;
	enum direction dir_b = UP;
	enum direction dir_c = UP;
	enum direction dir_d = UP;
	enum direction dir_e = UP;
	enum direction dir_f = UP;
	enum direction dir_g = UP;
	enum direction dir_h = UP;

	int ret_a;
	int ret_b;
	int ret_c;
	int ret_d;
	int ret_e;
	int ret_f;
	int ret_g;
	int ret_h;

	printk("Servomotor control\n");

	if (!device_is_ready(servo_a.dev)) {
		printk("Error: PWM device %s is not ready\n", servo_a.dev->name);
		return;
	}

	while (1) {
		ret_a = pwm_set_pulse_dt(&servo_a, pulse_width);
		ret_b = pwm_set_pulse_dt(&servo_b, pulse_width1);
		ret_c = pwm_set_pulse_dt(&servo_c, pulse_width2);
		ret_d = pwm_set_pulse_dt(&servo_d, pulse_width3);
		ret_e = pwm_set_pulse_dt(&servo_e, pulse_width4);
		ret_f = pwm_set_pulse_dt(&servo_f, pulse_width5);
		ret_g = pwm_set_pulse_dt(&servo_g, pulse_width6);
		ret_h = pwm_set_pulse_dt(&servo_h, pulse_width7);

		if (ret_a < 0 ) {
			printk("Error %d: failed to set pulse width\n", ret_a);
			return;
		}
		
		if (ret_b < 0) {
			printk("Error %d: failed to set pulse width\n", ret_b);
			return;
		}
		if (ret_c < 0) {
			printk("Error %d: failed to set pulse width\n", ret_c);
			return;
		}
		if (ret_d < 0) {
			printk("Error %d: failed to set pulse width\n", ret_d);
			return;
		}
		if (ret_e < 0) {
			printk("Error %d: failed to set pulse width\n", ret_e);
			return;
		}
		if (ret_f < 0) {
			printk("Error %d: failed to set pulse width\n", ret_f);
			return;
		}
		if (ret_g < 0) {
			printk("Error %d: failed to set pulse width\n", ret_g);
			return;
		}
		if (ret_h < 0) {
			printk("Error %d: failed to set pulse width\n", ret_h);
			return;
		}



		////////////////////SERVO0////////////////////
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
		
		////////////////////SERVO1////////////////////
		
		if (dir_b == DOWN) {
			if (pulse_width1 <= min_pulso) {
				dir_b = UP;
				pulse_width1 = min_pulso;
			} else {
				pulse_width1 -= STEP;
			}
		} else {
			pulse_width1 += STEP;
	
			if (pulse_width1 >= max_pulso) {
				dir_b = DOWN;
				pulse_width1 = max_pulso;
			}
		}
		
		////////////////////SERVO2////////////////////
		
		if (dir_c == DOWN) {
			if (pulse_width2 <= min_puls2) {
				dir_c = UP;
				pulse_width2 = min_puls2;
			} else {
				pulse_width2 -= STEP;
			}
		} else {
			pulse_width2 += STEP;
	
			if (pulse_width2 >= max_puls2) {
				dir_c = DOWN;
				pulse_width2 = max_puls2;
			}
		}
		////////////////////SERVO3////////////////////
		
		if (dir_d == DOWN) {
			if (pulse_width3 <= min_puls3) {
				dir_d = UP;
				pulse_width3 = min_puls3;
			} else {
				pulse_width3 -= STEP;
			}
		} else {
			pulse_width3 += STEP;
	
			if (pulse_width3 >= max_puls3) {
				dir_d = DOWN;
				pulse_width3 = max_puls3;
			}
		}
		////////////////////SERVO4////////////////////
		
		if (dir_e == DOWN) {
			if (pulse_width4 <= min_puls4) {
				dir_e = UP;
				pulse_width4 = min_puls4;
			} else {
				pulse_width4 -= STEP;
			}
		} else {
			pulse_width4 += STEP;
	
			if (pulse_width4 >= max_puls4) {
				dir_e = DOWN;
				pulse_width4 = max_puls4;
			}
		}
		////////////////////SERVO5////////////////////
		
		if (dir_f == DOWN) {
			if (pulse_width5 <= min_puls5) {
				dir_f = UP;
				pulse_width5 = min_puls5;
			} else {
				pulse_width5 -= STEP;
			}
		} else {
			pulse_width6 += STEP;
	
			if (pulse_width5 >= max_puls5) {
				dir_f = DOWN;
				pulse_width5 = max_puls5;
			}
		}
		////////////////////SERVO6////////////////////
		
		if (dir_g == DOWN) {
			if (pulse_width6 <= min_puls6) {
				dir_g = UP;
				pulse_width6 = min_puls6;
			} else {
				pulse_width6 -= STEP;
			}
		} else {
			pulse_width6 += STEP;
	
			if (pulse_width6 >= max_puls6) {
				dir_g = DOWN;
				pulse_width6 = max_puls6;
			}
		}
		////////////////////SERVO7////////////////////
		
		if (dir_h == DOWN) {
			if (pulse_width7 <= min_puls7) {
				dir_h = UP;
				pulse_width7 = min_puls7;
			} else {
				pulse_width7 -= STEP;
			}
		} else {
			pulse_width7 += STEP;
	
			if (pulse_width7 >= max_puls7) {
				dir_h = DOWN;
				pulse_width7 = max_puls7;
			}
		}
	
		
		k_sleep(STEP_TIME);
	}
	
}
	
