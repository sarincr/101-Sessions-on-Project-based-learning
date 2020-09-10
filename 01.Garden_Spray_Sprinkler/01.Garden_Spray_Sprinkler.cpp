#include <Arduino.h>
#include <LED.h>

LED sprinkler_motor(11);

void setup() {
  sprinkler_motor.begin(1000);
}

void loop() {
  sprinkler_motor.brightness(0, 300, 65);
  sprinkler_motor.brightness(300, 600, 125);
  sprinkler_motor.brightness(600, 1000, 255);
}
