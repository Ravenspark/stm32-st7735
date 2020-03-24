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

/*
void ST7735_Select() {
    HAL_GPIO_WritePin(ST7735_CS_GPIO_Port, ST7735_CS_Pin, GPIO_PIN_RESET);
}

void ST7735_Unselect() {
    HAL_GPIO_WritePin(ST7735_CS_GPIO_Port, ST7735_CS_Pin, GPIO_PIN_SET);
}

void ST7735_Reset() {
    HAL_GPIO_WritePin(ST7735_RES_GPIO_Port, ST7735_RES_Pin, GPIO_PIN_RESET);
    HAL_Delay(5);
    HAL_GPIO_WritePin(ST7735_RES_GPIO_Port, ST7735_RES_Pin, GPIO_PIN_SET);
}

void ST7735_SetMode(ST7735_mode_e mode) {
	if(mode == ST7735_COMMAND){
		HAL_GPIO_WritePin(ST7735_DC_GPIO_Port, ST7735_DC_Pin, GPIO_PIN_RESET);
	} else if (ST7735_DATA) {
		HAL_GPIO_WritePin(ST7735_DC_GPIO_Port, ST7735_DC_Pin, GPIO_PIN_SET);
	}
}

void ST7735_TransmitData(uint8_t* buff, size_t buff_size) {
    HAL_SPI_Transmit(&ST7735_SPI_PORT, buff, buff_size, HAL_MAX_DELAY);
}

void ST7735_WriteCommand(uint8_t cmd) {
	  ST7735_SetMode(ST7735_COMMAND);
	  ST7735_TransmitData(&cmd, sizeof(cmd));
}

void ST7735_WriteData(uint8_t* buff, size_t buff_size) {
		ST7735_SetMode(ST7735_DATA);
		ST7735_TransmitData(buff, buff_size);
}
 */

#endif /* STM32_ST7735_INC_ST7735_PORT_H_ */
