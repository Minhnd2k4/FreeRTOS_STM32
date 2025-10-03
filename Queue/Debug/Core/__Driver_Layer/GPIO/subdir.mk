################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/__Driver_Layer/GPIO/Gpio_Config.c \
../Core/__Driver_Layer/GPIO/My_Gpio.c 

OBJS += \
./Core/__Driver_Layer/GPIO/Gpio_Config.o \
./Core/__Driver_Layer/GPIO/My_Gpio.o 

C_DEPS += \
./Core/__Driver_Layer/GPIO/Gpio_Config.d \
./Core/__Driver_Layer/GPIO/My_Gpio.d 


# Each subdirectory must supply rules for building sources it contributes
Core/__Driver_Layer/GPIO/%.o Core/__Driver_Layer/GPIO/%.su Core/__Driver_Layer/GPIO/%.cyclo: ../Core/__Driver_Layer/GPIO/%.c Core/__Driver_Layer/GPIO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-__Driver_Layer-2f-GPIO

clean-Core-2f-__Driver_Layer-2f-GPIO:
	-$(RM) ./Core/__Driver_Layer/GPIO/Gpio_Config.cyclo ./Core/__Driver_Layer/GPIO/Gpio_Config.d ./Core/__Driver_Layer/GPIO/Gpio_Config.o ./Core/__Driver_Layer/GPIO/Gpio_Config.su ./Core/__Driver_Layer/GPIO/My_Gpio.cyclo ./Core/__Driver_Layer/GPIO/My_Gpio.d ./Core/__Driver_Layer/GPIO/My_Gpio.o ./Core/__Driver_Layer/GPIO/My_Gpio.su

.PHONY: clean-Core-2f-__Driver_Layer-2f-GPIO

