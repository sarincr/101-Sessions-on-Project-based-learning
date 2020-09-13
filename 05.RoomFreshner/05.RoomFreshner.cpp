#include <Arduino.h>

#include <jled.h>

auto led = JLed(11).Candle().Forever();

void setup() {
}

void loop() {
    led.Update();
}
