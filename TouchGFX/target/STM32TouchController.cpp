/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : STM32TouchController.cpp
  ******************************************************************************
  * This file was created by TouchGFX Generator 4.24.1. This file is only
  * generated once! Delete this file from your project and re-generate code
  * using STM32CubeMX or change this file manually to update it.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* USER CODE BEGIN STM32TouchController */

#include <STM32TouchController.hpp>
#include <TouchGFXHAL.hpp>
#include <../../Drivers/BSP/Components/ft5336/ft5336.h>
#include <stm32f7xx_hal.h>
#include <touchgfx/hal/OSWrappers.hpp>

static TS_DrvTypeDef* tsDriver;
extern I2C_HandleTypeDef hi2c3;

void STM32TouchController::init()
{
    /* Initialize the TS driver structure */
    tsDriver = &ft5336_ts_drv;

    /* Initialize the TS driver */
    tsDriver->Start(FT5336_I2C_SLAVE_ADDRESS);
}

bool STM32TouchController::sampleTouch(int32_t& x, int32_t& y)
{
    /**
     * By default sampleTouch returns false,
     * return true if a touch has been detected, otherwise false.
     *
     * Coordinates are passed to the caller by reference by x and y.
     *
     * This function is called by the TouchGFX framework.
     * By default sampleTouch is called every tick, this can be adjusted by HAL::setTouchSampleRate(int8_t);
     *
     */
	if (tsDriver)
	{
		if (tsDriver->DetectTouch(FT5336_I2C_SLAVE_ADDRESS))
		{
			/* Get each touch coordinates */
			uint16_t _x, _y;
			tsDriver->GetXY(FT5336_I2C_SLAVE_ADDRESS, &_y, &_x);
			x = (int32_t)_x;
			y = (int32_t)_y;
			return true;
		}
	}
	return false;
}

/* USER CODE END STM32TouchController */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
