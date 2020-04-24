# ST7735 Driver for STM32
## Setup
To use the library the following defines must be available:

Define                  |   Description
----------------------- | --------------------------------- 
`ST7735_SPI_PORT`       |   SPI Port to use (`SPI_HandleTypeDef`)
`ST7735_RES_Pin`        |   Reset Pin Number (`uint16_t`)
`ST7735_RES_GPIO_Port`  |   Reset Pin Port (`GPIO_TypeDef`)
`ST7735_CS_Pin`         |   Chip Select Pin Number (`uint16_t`)
`ST7735_CS_GPIO_Port`   |   Chip Select Port (`GPIO_TypeDef`)
`ST7735_DC_Pin`         |   Data/Command Pin Number (`uint16_t`)
`ST7735_DC_GPIO_Port`   |   Data/Command Pin Port (`GPIO_TypeDef`)

If not, they are defined to some default values in st7735_port.h leaving a warning...