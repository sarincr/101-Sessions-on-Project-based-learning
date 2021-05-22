#include <RGBLed.h>

RGBLed led(3, 5, 6, RGBLed::COMMON_CATHODE);

void setup() { }

void loop() {
	led.fadeOut(RGBLed::RED, 5, 100);
	led.fadeOut(0, 255, 0, 5, 100);
	led.fadeIn(RGBLed::RED, 5, 100);
	led.fadeIn(0, 255, 0, 5, 100);
}
