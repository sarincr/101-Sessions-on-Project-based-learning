ifeq ($(OS),Windows_NT)
SHELL = cmd
RMDIR = rmdir /s /q
RM = del /q
mymkdir = if not exist "$1" mkdir "$1"
else
RMDIR = rm -fr
RM = rm -f
mymkdir = mkdir -p $1
endif

PROJECT_OBJS = \
	project/04.Breathing_Support.cpp.o \

PLATFORM_CORE_OBJS = \
	core/USBCore.cpp.o \
	core/WMath.cpp.o \
	core/abi.cpp.o \
	core/IPAddress.cpp.o \
	core/Stream.cpp.o \
	core/wiring_analog.c.o \
	core/wiring.c.o \
	core/HardwareSerial1.cpp.o \
	core/hooks.c.o \
	core/HardwareSerial.cpp.o \
	core/wiring_shift.c.o \
	core/HardwareSerial2.cpp.o \
	core/wiring_pulse.S.o \
	core/PluggableUSB.cpp.o \
	core/main.cpp.o \
	core/Tone.cpp.o \
	core/Print.cpp.o \
	core/HardwareSerial3.cpp.o \
	core/new.cpp.o \
	core/wiring_digital.c.o \
	core/WString.cpp.o \
	core/WInterrupts.c.o \
	core/wiring_pulse.c.o \
	core/CDC.cpp.o \
	core/HardwareSerial0.cpp.o \

PLATFORM_VARIANT_OBJS = \

LIBRARIES_OBJS = \
	libraries/JLed/4.5.1/src/esp32_hal.cpp.o \
	libraries/JLed/4.5.1/src/jled_base.cpp.o \

TARGETS = \
	04.Breathing_Support.hex \
	04.Breathing_Support.eep \

all: $(TARGETS)

04.Breathing_Support.hex: 04.Breathing_Support.elf
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-objcopy" -O ihex -R .eeprom  "./04.Breathing_Support.elf" "./04.Breathing_Support.hex"

04.Breathing_Support.eep: 04.Breathing_Support.elf
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0  "./04.Breathing_Support.elf" "./04.Breathing_Support.eep"

04.Breathing_Support.elf: $(PROJECT_OBJS) $(LIBRARIES_OBJS) core.a
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -w -Os -g -flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=atmega328p   -o "./04.Breathing_Support.elf" $(PROJECT_OBJS) $(LIBRARIES_OBJS)  "./core.a" "-L." -lm

core.a:	$(PLATFORM_CORE_OBJS) $(PLATFORM_VARIANT_OBJS)

clean:
	-$(RMDIR) project core variant libraries
	-$(RM) *.hex *.eep *.bin *.elf *.a *.ar *.d

size:
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-size" -A "./04.Breathing_Support.elf"

project/04.Breathing_Support.cpp.o: ../../04.Breathing_Support.cpp project/04.Breathing_Support.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"

project/04.Breathing_Support.cpp.d: ;

-include project/04.Breathing_Support.cpp.d 


core/USBCore.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/USBCore.cpp core/USBCore.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/USBCore.cpp.d: ;

-include core/USBCore.cpp.d

core/WMath.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/WMath.cpp core/WMath.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/WMath.cpp.d: ;

-include core/WMath.cpp.d

core/abi.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/abi.cpp core/abi.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/abi.cpp.d: ;

-include core/abi.cpp.d

core/IPAddress.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/IPAddress.cpp core/IPAddress.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/IPAddress.cpp.d: ;

-include core/IPAddress.cpp.d

core/Stream.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/Stream.cpp core/Stream.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Stream.cpp.d: ;

-include core/Stream.cpp.d

core/wiring_analog.c.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_analog.c core/wiring_analog.c.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_analog.c.d: ;

-include core/wiring_analog.c.d

core/wiring.c.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring.c core/wiring.c.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring.c.d: ;

-include core/wiring.c.d

core/HardwareSerial1.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial1.cpp core/HardwareSerial1.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial1.cpp.d: ;

-include core/HardwareSerial1.cpp.d

core/hooks.c.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/hooks.c core/hooks.c.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/hooks.c.d: ;

-include core/hooks.c.d

core/HardwareSerial.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial.cpp core/HardwareSerial.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial.cpp.d: ;

-include core/HardwareSerial.cpp.d

core/wiring_shift.c.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_shift.c core/wiring_shift.c.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_shift.c.d: ;

-include core/wiring_shift.c.d

core/HardwareSerial2.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial2.cpp core/HardwareSerial2.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial2.cpp.d: ;

-include core/HardwareSerial2.cpp.d

core/wiring_pulse.S.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_pulse.S
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -x assembler-with-cpp -flto -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/PluggableUSB.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/PluggableUSB.cpp core/PluggableUSB.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/PluggableUSB.cpp.d: ;

-include core/PluggableUSB.cpp.d

core/main.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/main.cpp core/main.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/main.cpp.d: ;

-include core/main.cpp.d

core/Tone.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/Tone.cpp core/Tone.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Tone.cpp.d: ;

-include core/Tone.cpp.d

core/Print.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/Print.cpp core/Print.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Print.cpp.d: ;

-include core/Print.cpp.d

core/HardwareSerial3.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial3.cpp core/HardwareSerial3.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial3.cpp.d: ;

-include core/HardwareSerial3.cpp.d

core/new.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/new.cpp core/new.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/new.cpp.d: ;

-include core/new.cpp.d

core/wiring_digital.c.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_digital.c core/wiring_digital.c.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_digital.c.d: ;

-include core/wiring_digital.c.d

core/WString.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/WString.cpp core/WString.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/WString.cpp.d: ;

-include core/WString.cpp.d

core/WInterrupts.c.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/WInterrupts.c core/WInterrupts.c.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/WInterrupts.c.d: ;

-include core/WInterrupts.c.d

core/wiring_pulse.c.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_pulse.c core/wiring_pulse.c.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_pulse.c.d: ;

-include core/wiring_pulse.c.d

core/CDC.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/CDC.cpp core/CDC.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/CDC.cpp.d: ;

-include core/CDC.cpp.d

core/HardwareSerial0.cpp.o: /root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial0.cpp core/HardwareSerial0.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial0.cpp.d: ;

-include core/HardwareSerial0.cpp.d



libraries/JLed/4.5.1/src/esp32_hal.cpp.o: /root/.arduinocdt/libraries/JLed/4.5.1/src/esp32_hal.cpp libraries/JLed/4.5.1/src/esp32_hal.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"

libraries/JLed/4.5.1/src/esp32_hal.cpp.d: ;

-include libraries/JLed/4.5.1/src/esp32_hal.cpp.d

libraries/JLed/4.5.1/src/jled_base.cpp.o: /root/.arduinocdt/libraries/JLed/4.5.1/src/jled_base.cpp libraries/JLed/4.5.1/src/jled_base.cpp.d
	@$(call mymkdir,$(dir $@))
	"/root/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/root/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/root/.arduinocdt/libraries/JLed/4.5.1/src" "$<" -o "$@"

libraries/JLed/4.5.1/src/jled_base.cpp.d: ;

-include libraries/JLed/4.5.1/src/jled_base.cpp.d

