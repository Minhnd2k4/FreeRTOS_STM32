/*
 * Gpio_Config.c
 *
 *  Created on: Sep 30, 2025
 *      Author: dangm
 */
#include "Gpio_Config.h"

void Set_Pin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_SET);
}

void Reset_Pin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	HAL_GPIO_WritePin(GPIOx, GPIO_Pin, GPIO_PIN_RESET);
}

bool Read_Pin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin) {
	bool State_Pin = HAL_GPIO_ReadPin(GPIOx, GPIO_Pin);
	return State_Pin;
}
