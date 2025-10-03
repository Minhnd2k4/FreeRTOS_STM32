/*
 * My_Gpio.h
 *
 *  Created on: Oct 2, 2025
 *      Author: dangm
 */

#ifndef DRIVER_LAYER_GPIO_MY_GPIO_H_
#define DRIVER_LAYER_GPIO_MY_GPIO_H_

#include "Gpio_Config.h"

#define PORT_LED_GREEN	GPIOA
#define GPIO_LED_GREEN	GPIO_PIN_1

#define PORT_LED_RED	GPIOA
#define GPIO_LED_RED	GPIO_PIN_2

#define PORT_LED_BLUE	GPIOC
#define GPIO_LED_BLUE	GPIO_PIN_13

typedef void (*GPIOFunc)(void);

typedef struct {
	const GPIOFunc On;
	const GPIOFunc Off;
}LED_t;

extern LED_t BlueLED;
extern LED_t GreenLED;
extern LED_t RedLED;

void GreenLed_On(void);
void GreenLed_Off(void);
void RedLed_On(void);
void RedLed_Off(void);
void BlueLed_On(void);
void BlueLed_Off(void);

#endif /* DRIVER_LAYER_GPIO_MY_GPIO_H_ */
