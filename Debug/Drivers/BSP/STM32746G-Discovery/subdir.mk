################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Workspaces/stm32f7-discovery-workspace/SPI_FullDuplex_ComPolling/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.c 

OBJS += \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.o 

C_DEPS += \
./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.o: D:/Workspaces/stm32f7-discovery-workspace/SPI_FullDuplex_ComPolling/Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.c Drivers/BSP/STM32746G-Discovery/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/X-NUCLEO-IHMxx" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/STM32746G-Discovery" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/powerSTEP01" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/Common" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-STM32746G-2d-Discovery

clean-Drivers-2f-BSP-2f-STM32746G-2d-Discovery:
	-$(RM) ./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.cyclo ./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.d ./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.o ./Drivers/BSP/STM32746G-Discovery/stm32746g_discovery.su

.PHONY: clean-Drivers-2f-BSP-2f-STM32746G-2d-Discovery

