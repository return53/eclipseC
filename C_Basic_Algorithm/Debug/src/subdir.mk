################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/C_Basic_Algorithm.c \
../src/print.c 

C_DEPS += \
./src/C_Basic_Algorithm.d \
./src/print.d 

OBJS += \
./src/C_Basic_Algorithm.o \
./src/print.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/C_Basic_Algorithm.d ./src/C_Basic_Algorithm.o ./src/print.d ./src/print.o

.PHONY: clean-src

