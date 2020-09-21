#include <Arduino.h>

const int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  char c = Serial.read();
  if(c == 'a'){
    digitalWrite(led, HIGH);
  }
  else if(c == 'b'){
    digitalWrite(led, LOW);
  }
  else{

  }
  delay(25);
}
