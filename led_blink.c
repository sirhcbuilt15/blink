#include <avr/io.h>
#include <util/delay.h>

/*
  Atmega8 ports & Arduino pins:
  port B -> digital pins 8-13
  port C -> analog input pins 0-5
  port D -> digital pins 0-7

  http://arduino.cc/en/Hacking/PinMapping


  Connect a LED between pin 13 and GND.
 */


int main(void)
{
  /* Initialization, set PB5 (arduino digital pin 13) as output */
  DDRB |= (1<<PB5);

  while (1) 
  {
    PORTB |= (1<<PB5);  //arduino digital pin 5 -> 5V
    _delay_ms(3000);
    PORTB &= ~(1<<PB5);  //arduino digital pin 5 -> GND   
    _delay_ms(3000);
  }
  return 0;
}

