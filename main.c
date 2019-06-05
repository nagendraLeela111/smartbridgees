/*
 * bottom to top.c
 *
 * Created: 6/4/2019 3:27:42 PM
 * Author : Bhargav
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif


#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	int arr[10]={0x10,0x20,0x40,0x80,0x01,0x02,0x04,0x08};
	DDRD=0xFF;
	
	/* Replace with your application code */
	while (1)
	{
		
		
		for(int i=7;i>=0;i--)
		{
			
			PORTD=arr[i];
			_delay_ms(220);
			
		}
		
	}
}

    

