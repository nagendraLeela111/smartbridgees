/*
 * even to odd.c
 *
 * Created: 6/4/2019 3:42:18 PM
 * Author : Bhargav
 */ 
#ifndef F_CPU
#define F_CPU 16000000Ul
#endif

#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD = 0xFF;
	int arr[10]={0x55,0xAA};
	
    /* Replace with your application code */
    while (1) 
    {
		
    for(int i=0;i<2;i++){
		PORTD=arr[i];
	_delay_ms(2000);

	}
	}
}