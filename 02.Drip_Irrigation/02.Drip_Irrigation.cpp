#include <Arduino.h>
#include <BlinkControl.h>
#include<Shifty.h>
BlinkControl motor(11);

void setup() {
  motor.begin();
  motor.blink4();
}

void loop() {
  motor.loop();
}
