/*

ADXL345  LIBRARY for STM32 using I2C

  Updated:  7/12/2020


*/

#ifndef _ADXL345_H_
#define _ADXL345_H_


#include "stm32G0xx_hal.h"

void adxl_write (uint8_t reg, uint8_t value);
void adxl_read_values (uint8_t reg);
void adxl_read_address (uint8_t reg);
void adxl_init (void);
void adxl_getval(void);

#endif 






