#include <stdint.h>
#include <util/delay.h>
#include <avr/io.h>

// Defining both of the digital sound sensor pins
#define soundPin1 PD4
#define soundPin2 PD5

int main(void)
{
    // Turn on the transmission of both output pins
    DDRD |= _BV(DDD2);
    DDRD |= _BV(DDD3);
    // If sound pin 1 is high, set Digital Port 2 to High, otherwise set low
    if (soundPin1 == 1)
    {
        PORTD |= _BV(PORTD2);
    }
    else
    {
        PORTD |= ~_BV(PORTD2);
    }
    // If sound pin 2 is high, set Digital Port 3 to High, otherwise set low
    if (soundPin2 == 1)
    {
        PORTD |= _BV(PORTD3);
    }
    else
    {
        PORTD |= ~_BV(PORTD3);
    }
    _delay_ms(100);
}
