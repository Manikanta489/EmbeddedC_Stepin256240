#ifndef __GPIO_H_
#define __GPIO_H_

/**
 * @file gpio.h
 * @author Manikanta Suri manikantaram215@gmail.com
 * @brief Header file for gpio.c
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Include the necessary header files
 */

#include <avr/io.h>

/**
 * Structure defnitions
 */
typedef struct gpio
{
    uint8_t gpio_out;
    uint16_t adc_out;
}activity_output;


/**
 * Macro Definitions
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */
#define LED_ON_TIME     (1000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (500)   /**< LED OFF time in milli seconds */
#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define CONFIGURE_PB0 (1 << DDB0);  /**< Configure Pin PB0 as output as Led is connected to PB0 Pin */
#define CONFIGURE_PUSH_BUTTONS (~(1<<DDD0)|(1<<DDD4)); /**< Configure Pin PD0, PD4 as inputs as push buttons are connected to it */
#define PD0_PD4_LOGIC_HIGH ((1<<DDD0)|(1<<DDD4)); /**< Send logic high signal to PD0, PD4 */
#define CHECK_ACTIVATION_OF_PUSH_BUTTONS (!(PIND&((1<<DDD0)|(1<<DDD4))))
/**
 * Function Definitions
 */

/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void change_led_state(uint8_t state);
/**
 * @brief Blink the LED according to the activation of push buttons
 * 
 * @return 1 if both push buttons are zero else 0
 */
/**
 * @brief Status of LED
 * 
 * @return 1 for ON else 0
 */
int gpio(void);
#endif