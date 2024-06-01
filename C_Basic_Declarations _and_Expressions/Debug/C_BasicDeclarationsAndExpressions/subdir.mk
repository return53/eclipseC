################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../C_BasicDeclarationsAndExpressions/main.c 

C_DEPS += \
./C_BasicDeclarationsAndExpressions/main.d 

OBJS += \
./C_BasicDeclarationsAndExpressions/main.o 


# Each subdirectory must supply rules for building sources it contributes
C_BasicDeclarationsAndExpressions/%.o: ../C_BasicDeclarationsAndExpressions/%.c C_BasicDeclarationsAndExpressions/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-C_BasicDeclarationsAndExpressions

clean-C_BasicDeclarationsAndExpressions:
	-$(RM) ./C_BasicDeclarationsAndExpressions/main.d ./C_BasicDeclarationsAndExpressions/main.o

.PHONY: clean-C_BasicDeclarationsAndExpressions

