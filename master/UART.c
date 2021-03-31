

#include "UART.h"


void UART_Init(void)
{
	uint32 BR_Value = 0;
	
	DIO_SetPinDir(DIO_PORTD , DIO_PIN1 , DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTD , DIO_PIN0 , DIO_PIN_INPUT);
	
	BR_Value = (FREQ) / ((16 * Desired_BR)) - 1;
	
	UBRRL = BR_Value ;
	
	SET_BIT(UCSRB , 3);
	SET_BIT(UCSRB , 4);
	
	UCSRC = 0x86;
	
}

void UART_Transferpass(uint8 PASS)  
{
	UDR = PASS;
	
	while(GET_BIT(UCSRA , 5) == 0);
	
}

void UART_TransferStringpass(uint8* strpass)  
{
	uint8 i = 0;
	
	while(strpass[i] != '\0')
	{
		UART_Transferpass(strpass[i]);
		i++;
	}
}

uint8 UART_Recievepass(void)   
{
	
	while(GET_BIT(UCSRA , 7) == 0);
	
	return UDR;
}
