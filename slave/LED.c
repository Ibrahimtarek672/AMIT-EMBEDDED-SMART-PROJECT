


#include "LED.h"


void LED1_Init(void)
{
	DIO_SetPinDir(DIO_PORTB , DIO_PIN0 , DIO_PIN_OUTPUT);
}

void LED1_ON(void)
{
	DIO_SetPinVal(DIO_PORTB , DIO_PIN0 , DIO_PIN_HIGH);
}

void LED1_OFF(void)
{
	DIO_SetPinVal(DIO_PORTB , DIO_PIN0, DIO_PIN_LOW);
}

void LED1_Toggle(void)
{
	DIO_TogglePin(DIO_PORTB , DIO_PIN0);
	_delay_ms(300);
}

/* $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ */

void LED2_Init(void)
{
	DIO_SetPinDir(DIO_PORTB , DIO_PIN3 , DIO_PIN_OUTPUT);
}

void LED2_ON(void)
{
	DIO_SetPinVal(DIO_PORTB , DIO_PIN3 , DIO_PIN_HIGH);
}

void LED2_OFF(void)
{
	DIO_SetPinVal(DIO_PORTB , DIO_PIN3 , DIO_PIN_LOW);
}

void LED2_Toggle(void)
{
	DIO_TogglePin(DIO_PORTB , DIO_PIN3);
	_delay_ms(300);
}