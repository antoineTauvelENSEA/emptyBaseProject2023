/*
 * studentWork.c
 *
 *  Created on: Jun 21, 2023
 *      Author: antotauv
 */

#include <stm32l4xx_hal.h>
#include "ensea.h"
extern UART_HandleTypeDef huart2;
void setup(void){
    // insert the setup here, it will be run once.
}

void loop(void){
    // This code will run indefinitly.
    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,0);
    HAL_Delay(250);
    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,1);
    HAL_Delay(250);
    printf("Easy come, easy go !\n\r");
 //   HAL_UART_Transmit(&huart2,"Test \n\r",8,-1);
}

