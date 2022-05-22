/*
 * main.c
 *
 *  Created on: 22-May-2022
 *      Author: segin
 */

# include <avr/io.h>
# include <util/delay.h>

int main(void)
{
	DDRB = 0x01;
	PORTB = 0;

	while(1)
	{
		PORTB = 0x01;
		_delay_ms(100);
		PORTB = 0x00;
		_delay_ms(100);
	}
}
