#include <jled.h>

// breathe LED for 5 times, LED is connected to pin 9 (PWM capable) gpio
auto motor = JLed(11).Breathe(2000).Repeat(5).DelayAfter(2000);

void setup() {
}

void loop() {
  motor.Update();
}
