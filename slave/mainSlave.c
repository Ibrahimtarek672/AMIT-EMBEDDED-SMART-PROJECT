// In this code slave recieve from master using SPI communaction protocol the send the data recieved to lcd and actuate 2 leds

#include "LED.h"
#include "SPI.h"
#include "LCD.h"

#define  F_CPU  8000000
#include <util/delay.h>

int main(void)
{
	uint8 ReceivedData;    // data received from the register(from master MCU)
	
	SPI_Slave_Init();
	
	LED0_Init();  // led 0 initialize
	LED1_Init();  // led 0 initialize
	LCD_Init();   // lcd initialize
	LCD_GoTo(1,6); // cursor go to the specific place

	while (1)
	{
		
		ReceivedData=SPI_RecieveData(SPI->SPDR);  // receiving data from the register using spi
		LCD_WriteChar(ReceivedData);              // lcd write
		if(ReceivedData==Password)                // checking
		{
			LED0_Toggle();
			_delay_ms(2000);
			LED0_Toggle();
			LED1_Toggle();
			_delay_ms(2000);
			LED1_Toggle();
		}
	}
	
}

