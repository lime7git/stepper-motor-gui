################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/Components/powerSTEP01/powerstep01.c 

OBJS += \
./Drivers/BSP/Components/powerSTEP01/powerstep01.o 

C_DEPS += \
./Drivers/BSP/Components/powerSTEP01/powerstep01.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/powerSTEP01/%.o Drivers/BSP/Components/powerSTEP01/%.su Drivers/BSP/Components/powerSTEP01/%.cyclo: ../Drivers/BSP/Components/powerSTEP01/%.c Drivers/BSP/Components/powerSTEP01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/X-NUCLEO-IHMxx" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/STM32746G-Discovery" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/powerSTEP01" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/Common" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/Fonts" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-powerSTEP01

clean-Drivers-2f-BSP-2f-Components-2f-powerSTEP01:
	-$(RM) ./Drivers/BSP/Components/powerSTEP01/powerstep01.cyclo ./Drivers/BSP/Components/powerSTEP01/powerstep01.d ./Drivers/BSP/Components/powerSTEP01/powerstep01.o ./Drivers/BSP/Components/powerSTEP01/powerstep01.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-powerSTEP01

