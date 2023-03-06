/*
 * zad1.c
 *
 *  Created on: Mar 6, 2023
 *      Author: student
 */


#include <avr/io.h>
#include <util/delay.h>
#include <stdint.h>
void ledBlink (int16_t high_time , int16_t low_time)
{
	PORTB |= 1 << 5; // LED ON
	_delay_ms (high_time) ; // Pauza 1 s
	PORTB &= ~(1 << 5) ; // LED OFF
	_delay_ms (low_time) ; // Pauza 1 s
}
