#include <Arduino.h>

int main()
{
  DDRD=0xff;  //assign all PORTD pins as output pins
  PORTD=0xff; //give output 'HIGH' '1' to all pins of PORTD - all segments off
  unsigned char number[6]={0x81,0xB7,0xC2,0x92,0xB4,0x98}; //hex numbers to display from 0 to 5
  int i;
  while(1)// to keep displaying the numbers in loop
  {
  for(i=0;i<6;i++)
  {
    PORTD=number[i]; //assign the hex number to PORTD to turn on respective LEDs
    _delay_ms(3000);
  }
  }
  return 0;
}
