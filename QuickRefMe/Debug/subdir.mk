################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../degiskenler.c \
../fonksiyonlar.c \
../quickRefMe.c 

C_DEPS += \
./degiskenler.d \
./fonksiyonlar.d \
./quickRefMe.d 

OBJS += \
./degiskenler.o \
./fonksiyonlar.o \
./quickRefMe.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./degiskenler.d ./degiskenler.o ./fonksiyonlar.d ./fonksiyonlar.o ./quickRefMe.d ./quickRefMe.o

.PHONY: clean--2e-

