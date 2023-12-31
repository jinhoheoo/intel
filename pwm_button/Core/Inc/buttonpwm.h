/*
 * buttonpwm.h
 *
 *  Created on: Nov 2, 2023
 *      Author: Administrator
 */

#ifndef INC_BUTTONPWM_H_
#define INC_BUTTONPWM_H_

#include "stm32f4xx_hal.h"

typedef struct _button{
  GPIO_TypeDef  *GPIOx;
  uint16_t      GPIO_Pin;
  uint16_t      preState;
}Button;

enum {PUSHED, RELEASED};
enum {NO_ACT, ACT_PUSHED, ACT_RELEASED};

void Button_Init(Button *btn, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
uint8_t Button_getState(Button *btn);



#endif /* INC_BUTTONPWM_H_ */
