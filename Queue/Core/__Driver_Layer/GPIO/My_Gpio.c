/*
 * My_Gpio.c
 *
 *  Created on: Oct 2, 2025
 *      Author: dangm
 */

#include "My_Gpio.h"

void GreenLed_On(void) {
	Set_Pin(PORT_LED_GREEN, GPIO_LED_GREEN);
}

void GreenLed_Off(void) {
	Reset_Pin(PORT_LED_GREEN, GPIO_LED_GREEN);
}

LED_t GreenLED = {GreenLed_On , GreenLed_Off};

void RedLed_On(void) {
	Set_Pin(PORT_LED_RED, GPIO_LED_RED);
}

void RedLed_Off(void) {
	Reset_Pin(PORT_LED_RED, GPIO_LED_RED);
}

LED_t RedLED = { RedLed_On, RedLed_Off};

void BlueLed_On(void) {
	Set_Pin(PORT_LED_BLUE, GPIO_LED_BLUE);
}

void BlueLed_Off(void) {
	Reset_Pin(PORT_LED_BLUE, GPIO_LED_BLUE);
}

LED_t BlueLED = { BlueLed_On, BlueLed_Off};
