#include <Arduino.h>
int lamp = 11; // choose the pin for the RELAY
int inputPin = 2; // choose the input pin (for PIR sensor)

int val = 0; // variable for reading the pin status

void setup() {

pinMode(lamp, OUTPUT); // declare lamp as output

pinMode(inputPin, INPUT); // declare sensor as input

Serial.begin(9600);

}

void loop(){

val = digitalRead(inputPin); // read input value

Serial.println(val);

if( val== 1) {

digitalWrite(lamp,HIGH); // turn ON the lamp
delay(5000);

} else {

digitalWrite(lamp,LOW); // turn OFF the lamp

}

}
