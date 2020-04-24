/*
 * port.h
 *
 *  Created on: Mar 23, 2020
 *      Author: darke
 */

#ifndef STM32_ST7735_INC_ST7735_PORT_H_
#define STM32_ST7735_INC_ST7735_PORT_H_

#include "stddef.h"
#include "stdint.h"

typedef enum {
	ST7735_COMMAND,
	ST7735_DATA
} ST7735_mode_e;

/*** Redefine if necessary ***/
#ifndef ST7735_SPI_PORT
#warning ST7735_SPI_PORT is not defined
#define ST7735_SPI_PORT hspi1
#endif

#ifndef ST7735_RES_Pin
#warning ST7735_RES_Pin is not defined
#define ST7735_RES_Pin       GPIO_PIN_7
#endif
#ifndef ST7735_RES_GPIO_Port
#warning ST7735_RES_GPIO_Port is not defined
#define ST7735_RES_GPIO_Port GPIOC
#endif
#ifndef ST7735_CS_Pin
#warning ST7735_CS_Pin is not defined
#define ST7735_CS_Pin        GPIO_PIN_6
#endif
#ifndef ST7735_CS_GPIO_Port
#warning ST7735_CS_GPIO_Port is not defined
#define ST7735_CS_GPIO_Port  GPIOB
#endif
#ifndef ST7735_DC_Pin
#warning ST7735_DC_Pin is not defined
#define ST7735_DC_Pin        GPIO_PIN_9
#endif
#ifndef ST7735_DC_GPIO_Port
#warning ST7735_DC_GPIO_Port is not defined
#define ST7735_DC_GPIO_Port  GPIOA
#endif

void ST7735_Select();

void ST7735_Unselect();

void ST7735_Reset();

void ST7735_SetMode(ST7735_mode_e mode);

void ST7735_TransmitData(uint8_t* buff, size_t buff_size);

void ST7735_WriteCommand(uint8_t cmd);

void ST7735_WriteData(uint8_t* buff, size_t buff_size);

void ST7735_Delay(uint32_t Delay);

#endif /* STM32_ST7735_INC_ST7735_PORT_H_ */
