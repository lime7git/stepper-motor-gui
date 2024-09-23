################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihm03a1_stm32f4xx.c \
../Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihmxx.c 

OBJS += \
./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihm03a1_stm32f4xx.o \
./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihmxx.o 

C_DEPS += \
./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihm03a1_stm32f4xx.d \
./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihmxx.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/X-NUCLEO-IHMxx/%.o Drivers/BSP/X-NUCLEO-IHMxx/%.su Drivers/BSP/X-NUCLEO-IHMxx/%.cyclo: ../Drivers/BSP/X-NUCLEO-IHMxx/%.c Drivers/BSP/X-NUCLEO-IHMxx/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/X-NUCLEO-IHMxx" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/STM32746G-Discovery" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/powerSTEP01" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/Common" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-X-2d-NUCLEO-2d-IHMxx

clean-Drivers-2f-BSP-2f-X-2d-NUCLEO-2d-IHMxx:
	-$(RM) ./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihm03a1_stm32f4xx.cyclo ./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihm03a1_stm32f4xx.d ./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihm03a1_stm32f4xx.o ./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihm03a1_stm32f4xx.su ./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihmxx.cyclo ./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihmxx.d ./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihmxx.o ./Drivers/BSP/X-NUCLEO-IHMxx/x_nucleo_ihmxx.su

.PHONY: clean-Drivers-2f-BSP-2f-X-2d-NUCLEO-2d-IHMxx

