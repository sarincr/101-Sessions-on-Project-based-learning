#include <Arduino.h>
#include "CountDown.h"

CountDown CD(CountDown::MINUTES);

uint32_t start, stop;

void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);
  delay(random(2000));
  start = millis();
  CD.start(10);
  Serial.println(start);
  while (CD.remaining() > 0 )
  {
    Serial.println(CD.remaining());
    delay(1000);
  }
  Serial.println(CD.remaining());
  Serial.println("Take Medicine");
}

void loop()
{
}
