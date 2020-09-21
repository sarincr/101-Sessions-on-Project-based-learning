#include <Arduino.h>

#include <Arduino.h>


int tempPin = A1;   // the output pin of LM35
int fan = 11;       // the pin where fan is
int led = 8;        // led pin
int temp;
int tempMin = 30;   // the temperature to start the fan
int tempMax = 70;   // the maximum temperature when fan is at 100%
int fanSpeed;


int readTemp()
{  // get the temperature and convert it to celsius
  temp = analogRead(tempPin);
  return temp * 0.48828125;
}
void setup() {
  pinMode(fan, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(tempPin, INPUT);
}

void loop()
{
   temp = readTemp();     // get the temperature
   if(temp  < tempMin) { // if temp is lower than minimum temp
      fanSpeed = 0; // fan is not spinning
      digitalWrite(fan, LOW);
   }
   if((temp  >= tempMin) && (temp <= tempMax)) { // if temperature is higher than minimum temp
      fanSpeed = map(temp, tempMin, tempMax, 32, 255); // the actual speed of fan

      analogWrite(fan, fanSpeed); // spin the fan at the fanSpeed speed
   }
   if(temp  > tempMax) {        // if temp is higher than tempMax
     digitalWrite(led, HIGH);  // turn on led
   } else {                    // else turn of led
     digitalWrite(led, LOW);
   }

}

