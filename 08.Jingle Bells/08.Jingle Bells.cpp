#include <Arduino.h>

 #define  C     2100
 #define  D     1870
 #define  E     1670
 #define  f     1580
 #define  G     1400

 #define  R     0

 int speakerOut = 9;

 int DEBUG = 1;
 void setup() {
   pinMode(speakerOut, OUTPUT);
   if (DEBUG) {
     Serial.begin(9600);
   }
 }

 int melody[] = {E, E, E,R,
 E, E, E,R,
 E, G, C, D, E, R,
 f, f, f,f, f, E, E,E, E, D ,D,E, D, R, G ,R,
 E, E, E,R,
 E, E, E,R,
 E, G, C, D, E, R,
 f, f, f,f, f, E, E, E,  G,G, f, D, C,R };
 int MAX_COUNT = sizeof(melody) / 2; // Melody length, for looping.

 long tempo = 10000;

 int pause = 1000;

 int rest_count = 100;
 int tone_ = 0;
 int beat = 0;
 long duration  = 0;

 void playTone() {
   long elapsed_time = 0;
   if (tone_ > 0) {

     while (elapsed_time < duration) {
       digitalWrite(speakerOut,HIGH);j
       delayMicroseconds(tone_ / 2);
       digitalWrite(speakerOut, LOW);
       delayMicroseconds(tone_ / 2);

       elapsed_time += (tone_);
     }
   }
   else {
     for (int j = 0; j < rest_count; j++)
     {
       delayMicroseconds(duration);
     }
   }
 }

 void loop() {
  for (int i=0; i<MAX_COUNT; i++) {
    tone_ = melody[i];
    beat = 50;

    duration = beat * tempo;

    playTone();
    delayMicroseconds(pause);
  }
 }
