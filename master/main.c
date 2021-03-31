// In this code we send data from virtual terminal using UART  communaction protocol which the virtual terminal works with
//Then the data checked if true send using SPI communaction protocol to slave MCU doing functions

#include "UART.h"
#include "SPI.h"
#include "LCD.h"


#define  F_CPU   8000000
#include <util/delay.h>

int main(void)
{

	uint8 data=0; // data sent from virtual terminal to mcu1(Master)
	
	UART_Init();
	_delay_ms(50);
	
	LCD_Init();
	LCD_GoTo(1,6);
	
	SPI_Master_Init();
	SPI_Master_Init_Trans();
	
	while (1)
	{
		data = UART_Rx();   // storing data from virtual terminal to MCU1
		LCD_WriteChar(data); // LCD WRITE
		if(data==Password)
		{
			SPI_TransferData(data);    // Transfer data to Slave MCU
		}
	}
}