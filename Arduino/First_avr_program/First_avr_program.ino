// PIN registers as "Port INput,” and the PORT registers as "Port Output Register Thing.”;
//#include "uart.h"
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
    DDRD = (1<<7); 
   // UART_Init(9600);
   
 
    // LED on pin PB2
    
    while(1)
    {
        PORTD = (1<<7);        // LED off
        _delay_ms(1000);// 50ms delay
        //UART_Printf("Welcome to avr serial programming\n");
        
        DDRD |=(1<<6); // OR condtion allows for both registers to work as both are True outputs 
        PORTD |= (1<<6); 
        _delay_ms(1000);
        
             
    }
    return (0);
}
