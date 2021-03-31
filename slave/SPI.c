
#include "SPI.h"


void SPI_Master_Init(void)
{
	DIO_SetPinDir(DIO_PORTB , DIO_PIN4 , DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTB , DIO_PIN5 , DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTB , DIO_PIN6 , DIO_PIN_INPUT);
	DIO_SetPinDir(DIO_PORTB , DIO_PIN7 , DIO_PIN_OUTPUT);
	
	SPI->SPCR = 0x53 ;
	
}

void SPI_Slave_Init(void)
{
	DIO_SetPinDir(DIO_PORTB , DIO_PIN4 , DIO_PIN_INPUT);
	DIO_SetPinDir(DIO_PORTB , DIO_PIN5 , DIO_PIN_INPUT);
	DIO_SetPinDir(DIO_PORTB , DIO_PIN6 , DIO_PIN_OUTPUT);
	DIO_SetPinDir(DIO_PORTB , DIO_PIN7 , DIO_PIN_INPUT);
	
	SPI->SPCR = 0x40 ;
}

void SPI_Master_Init_Trans(void)
{
	DIO_SetPinVal(DIO_PORTB , DIO_PIN4 , DIO_PIN_LOW);
}

void SPI_Master_Ter_Trans(void)
{
	DIO_SetPinVal(DIO_PORTB , DIO_PIN4 , DIO_PIN_HIGH);
}

void SPI_Transferpass(uint8 pass)
{
	SPI->SPDR = pass;
}

uint8 SPI_Recievepass(uint8* pass)
{
	uint8 rec_pass = 0;
	
	while(GET_BIT(SPI->SPSR , 7) == 0);
	
	rec_pass = SPI->SPDR ;
	
	return rec_pass;
}