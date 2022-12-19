#include<avr/io.h>
#include<util/delay.h>

int main()
{
    // set PINB0 to output in DDRB
    DDRB |= 0b00000001;

    while(1)
    {
        // toggle PINB0
        PORTB ^= 0b00000001;
        _delay_ms(500);
    }
}
