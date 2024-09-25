################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BSP/Components/Fonts/font12.c \
../Drivers/BSP/Components/Fonts/font16.c \
../Drivers/BSP/Components/Fonts/font20.c \
../Drivers/BSP/Components/Fonts/font24.c \
../Drivers/BSP/Components/Fonts/font8.c 

OBJS += \
./Drivers/BSP/Components/Fonts/font12.o \
./Drivers/BSP/Components/Fonts/font16.o \
./Drivers/BSP/Components/Fonts/font20.o \
./Drivers/BSP/Components/Fonts/font24.o \
./Drivers/BSP/Components/Fonts/font8.o 

C_DEPS += \
./Drivers/BSP/Components/Fonts/font12.d \
./Drivers/BSP/Components/Fonts/font16.d \
./Drivers/BSP/Components/Fonts/font20.d \
./Drivers/BSP/Components/Fonts/font24.d \
./Drivers/BSP/Components/Fonts/font8.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/Fonts/%.o Drivers/BSP/Components/Fonts/%.su Drivers/BSP/Components/Fonts/%.cyclo: ../Drivers/BSP/Components/Fonts/%.c Drivers/BSP/Components/Fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/X-NUCLEO-IHMxx" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/STM32746G-Discovery" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/powerSTEP01" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/Common" -I"D:/Workspaces/stm32f7-discovery-workspace/stepper-motor-gui/Drivers/BSP/Components/Fonts" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-Components-2f-Fonts

clean-Drivers-2f-BSP-2f-Components-2f-Fonts:
	-$(RM) ./Drivers/BSP/Components/Fonts/font12.cyclo ./Drivers/BSP/Components/Fonts/font12.d ./Drivers/BSP/Components/Fonts/font12.o ./Drivers/BSP/Components/Fonts/font12.su ./Drivers/BSP/Components/Fonts/font16.cyclo ./Drivers/BSP/Components/Fonts/font16.d ./Drivers/BSP/Components/Fonts/font16.o ./Drivers/BSP/Components/Fonts/font16.su ./Drivers/BSP/Components/Fonts/font20.cyclo ./Drivers/BSP/Components/Fonts/font20.d ./Drivers/BSP/Components/Fonts/font20.o ./Drivers/BSP/Components/Fonts/font20.su ./Drivers/BSP/Components/Fonts/font24.cyclo ./Drivers/BSP/Components/Fonts/font24.d ./Drivers/BSP/Components/Fonts/font24.o ./Drivers/BSP/Components/Fonts/font24.su ./Drivers/BSP/Components/Fonts/font8.cyclo ./Drivers/BSP/Components/Fonts/font8.d ./Drivers/BSP/Components/Fonts/font8.o ./Drivers/BSP/Components/Fonts/font8.su

.PHONY: clean-Drivers-2f-BSP-2f-Components-2f-Fonts

