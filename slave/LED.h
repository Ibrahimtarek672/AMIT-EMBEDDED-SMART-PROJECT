


#ifndef LED_H_
#define LED_H_

#include "DIO.h"

#define  F_CPU 8000000
#include <util/delay.h>

void LED1_Init(void);

void LED1_ON(void);

void LED1_OFF(void);

void LED1_Toggle(void);

/* $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ */

void LED2_Init(void);

void LED2_ON(void);

void LED2_OFF(void);

void LED2_Toggle(void);


#endif /* LED_H_ */