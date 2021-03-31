
#include "SPI.h"
#include "UART.h"

#define  F_CPU 8000000
#include <util/delay.h>

int main(void)
{
	uint8 passcode = 0;
	UART_Init();
	_delay_ms(50);
	
	SPI_Master_Init();
	SPI_Master_Init_Trans();
	
	while (1)
	{
		passcode = UART_Recievepass();   
		
		if(passcode == Password)
		{
			SPI_Transferpass(passcode);    
		}
	}
}

