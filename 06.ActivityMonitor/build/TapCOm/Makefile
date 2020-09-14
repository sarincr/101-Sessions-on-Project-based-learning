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
	project/06.ActivityMonitor.cpp.o \
	project/build/TapCOm/libraries/ADXL345/ADXL345.cpp.o \

PLATFORM_CORE_OBJS = \
	core/wiring_shift.c.o \
	core/wiring_pulse.c.o \
	core/wiring.c.o \
	core/HardwareSerial3.cpp.o \
	core/WInterrupts.c.o \
	core/CDC.cpp.o \
	core/WString.cpp.o \
	core/IPAddress.cpp.o \
	core/HardwareSerial2.cpp.o \
	core/new.cpp.o \
	core/Stream.cpp.o \
	core/Print.cpp.o \
	core/HardwareSerial0.cpp.o \
	core/HardwareSerial.cpp.o \
	core/PluggableUSB.cpp.o \
	core/wiring_digital.c.o \
	core/main.cpp.o \
	core/hooks.c.o \
	core/HardwareSerial1.cpp.o \
	core/USBCore.cpp.o \
	core/wiring_analog.c.o \
	core/WMath.cpp.o \
	core/Tone.cpp.o \
	core/wiring_pulse.S.o \
	core/abi.cpp.o \

PLATFORM_VARIANT_OBJS = \

LIBRARIES_OBJS = \
	libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src/SparkFun_ADXL345.cpp.o \
	libraries/SoftwareSerial/src/SoftwareSerial.cpp.o \
	libraries/HID/src/HID.cpp.o \
	libraries/Wire/src/utility/twi.c.o \
	libraries/Wire/src/Wire.cpp.o \
	libraries/SPI/src/SPI.cpp.o \

TARGETS = \
	06.ActivityMonitor.hex \
	06.ActivityMonitor.eep \

all: $(TARGETS)

06.ActivityMonitor.hex: 06.ActivityMonitor.elf
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-objcopy" -O ihex -R .eeprom  "./06.ActivityMonitor.elf" "./06.ActivityMonitor.hex"

06.ActivityMonitor.eep: 06.ActivityMonitor.elf
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0  "./06.ActivityMonitor.elf" "./06.ActivityMonitor.eep"

06.ActivityMonitor.elf: $(PROJECT_OBJS) $(LIBRARIES_OBJS) core.a
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -w -Os -g -flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=atmega328p   -o "./06.ActivityMonitor.elf" $(PROJECT_OBJS) $(LIBRARIES_OBJS)  "./core.a" "-L." -lm

core.a:	$(PLATFORM_CORE_OBJS) $(PLATFORM_VARIANT_OBJS)

clean:
	-$(RMDIR) project core variant libraries
	-$(RM) *.hex *.eep *.bin *.elf *.a *.ar *.d

size:
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-size" -A "./06.ActivityMonitor.elf"

project/06.ActivityMonitor.cpp.o: ../../06.ActivityMonitor.cpp project/06.ActivityMonitor.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"

project/06.ActivityMonitor.cpp.d: ;

-include project/06.ActivityMonitor.cpp.d 

project/build/TapCOm/libraries/ADXL345/ADXL345.cpp.o: ../../build/TapCOm/libraries/ADXL345/ADXL345.cpp project/build/TapCOm/libraries/ADXL345/ADXL345.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"

project/build/TapCOm/libraries/ADXL345/ADXL345.cpp.d: ;

-include project/build/TapCOm/libraries/ADXL345/ADXL345.cpp.d 


core/wiring_shift.c.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_shift.c core/wiring_shift.c.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_shift.c.d: ;

-include core/wiring_shift.c.d

core/wiring_pulse.c.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_pulse.c core/wiring_pulse.c.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_pulse.c.d: ;

-include core/wiring_pulse.c.d

core/wiring.c.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring.c core/wiring.c.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring.c.d: ;

-include core/wiring.c.d

core/HardwareSerial3.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial3.cpp core/HardwareSerial3.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial3.cpp.d: ;

-include core/HardwareSerial3.cpp.d

core/WInterrupts.c.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/WInterrupts.c core/WInterrupts.c.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/WInterrupts.c.d: ;

-include core/WInterrupts.c.d

core/CDC.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/CDC.cpp core/CDC.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/CDC.cpp.d: ;

-include core/CDC.cpp.d

core/WString.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/WString.cpp core/WString.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/WString.cpp.d: ;

-include core/WString.cpp.d

core/IPAddress.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/IPAddress.cpp core/IPAddress.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/IPAddress.cpp.d: ;

-include core/IPAddress.cpp.d

core/HardwareSerial2.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial2.cpp core/HardwareSerial2.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial2.cpp.d: ;

-include core/HardwareSerial2.cpp.d

core/new.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/new.cpp core/new.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/new.cpp.d: ;

-include core/new.cpp.d

core/Stream.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/Stream.cpp core/Stream.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Stream.cpp.d: ;

-include core/Stream.cpp.d

core/Print.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/Print.cpp core/Print.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Print.cpp.d: ;

-include core/Print.cpp.d

core/HardwareSerial0.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial0.cpp core/HardwareSerial0.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial0.cpp.d: ;

-include core/HardwareSerial0.cpp.d

core/HardwareSerial.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial.cpp core/HardwareSerial.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial.cpp.d: ;

-include core/HardwareSerial.cpp.d

core/PluggableUSB.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/PluggableUSB.cpp core/PluggableUSB.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/PluggableUSB.cpp.d: ;

-include core/PluggableUSB.cpp.d

core/wiring_digital.c.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_digital.c core/wiring_digital.c.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_digital.c.d: ;

-include core/wiring_digital.c.d

core/main.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/main.cpp core/main.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/main.cpp.d: ;

-include core/main.cpp.d

core/hooks.c.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/hooks.c core/hooks.c.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/hooks.c.d: ;

-include core/hooks.c.d

core/HardwareSerial1.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/HardwareSerial1.cpp core/HardwareSerial1.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/HardwareSerial1.cpp.d: ;

-include core/HardwareSerial1.cpp.d

core/USBCore.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/USBCore.cpp core/USBCore.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/USBCore.cpp.d: ;

-include core/USBCore.cpp.d

core/wiring_analog.c.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_analog.c core/wiring_analog.c.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"
	
core/wiring_analog.c.d: ;

-include core/wiring_analog.c.d

core/WMath.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/WMath.cpp core/WMath.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/WMath.cpp.d: ;

-include core/WMath.cpp.d

core/Tone.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/Tone.cpp core/Tone.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/Tone.cpp.d: ;

-include core/Tone.cpp.d

core/wiring_pulse.S.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/wiring_pulse.S
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -x assembler-with-cpp -flto -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/abi.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino/abi.cpp core/abi.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc-ar" rcs  "./core.a" "$@"

core/abi.cpp.d: ;

-include core/abi.cpp.d



libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src/SparkFun_ADXL345.cpp.o: /home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src/SparkFun_ADXL345.cpp libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src/SparkFun_ADXL345.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"

libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src/SparkFun_ADXL345.cpp.d: ;

-include libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src/SparkFun_ADXL345.cpp.d

libraries/SoftwareSerial/src/SoftwareSerial.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src/SoftwareSerial.cpp libraries/SoftwareSerial/src/SoftwareSerial.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"

libraries/SoftwareSerial/src/SoftwareSerial.cpp.d: ;

-include libraries/SoftwareSerial/src/SoftwareSerial.cpp.d

libraries/HID/src/HID.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src/HID.cpp libraries/HID/src/HID.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"

libraries/HID/src/HID.cpp.d: ;

-include libraries/HID/src/HID.cpp.d

libraries/Wire/src/utility/twi.c.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src/utility/twi.c libraries/Wire/src/utility/twi.c.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-gcc" -c -g -Os -w -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"

libraries/Wire/src/utility/twi.c.d: ;

-include libraries/Wire/src/utility/twi.c.d

libraries/Wire/src/Wire.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src/Wire.cpp libraries/Wire/src/Wire.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"

libraries/Wire/src/Wire.cpp.d: ;

-include libraries/Wire/src/Wire.cpp.d

libraries/SPI/src/SPI.cpp.o: /home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src/SPI.cpp libraries/SPI/src/SPI.cpp.d
	@$(call mymkdir,$(dir $@))
	"/home/angicia/.arduinocdt/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10608 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/variants/standard" -I"/home/angicia/.arduinocdt/libraries/SparkFun_ADXL345_Arduino_Library/1.0.0/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SoftwareSerial/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/HID/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/Wire/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/EEPROM/src" -I"/home/angicia/.arduinocdt/packages/arduino/hardware/avr/1.8.3/libraries/SPI/src" "$<" -o "$@"

libraries/SPI/src/SPI.cpp.d: ;

-include libraries/SPI/src/SPI.cpp.d

