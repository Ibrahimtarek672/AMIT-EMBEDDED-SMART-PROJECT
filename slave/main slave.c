#include "LED.h"
#include "SPI.h"
#include "LCD.h"

int main(void)
{
	uint8 Receivedpassword = 0; 
	
	SPI_Slave_Init();
	
	LED1_Init();  
	LED2_Init(); 
	LCD_Init();   
	LCD_GoTo(1,6); 

	while (1)
	{
		Receivedpassword = SPI_Recievepass(SPI->SPDR); 
		              
		if(Receivedpassword == Password)                
		{
			LCD_WriteChar(Receivedpassword);
			
			LED1_Toggle();
			LED2_Toggle();
		}
	}
}



