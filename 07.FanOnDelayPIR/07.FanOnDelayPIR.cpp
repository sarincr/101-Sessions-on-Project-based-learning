#include <Arduino.h>


#include <SeqButton.h>

SeqButton	but;

void callbackPush(SeqButton * button)
{
	digitalWrite(13, LOW);

	(void) button;
}

void callbackRelease(SeqButton * button)
{
	delay(5000);
	digitalWrite(13, HIGH);

	(void) button;
}


void setup() {

	pinMode(13, OUTPUT);


	but.init(2, &callbackPush, &callbackRelease, false, LOW, 50);
}


void loop() {
	but.handler();
}
