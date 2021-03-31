


#ifndef UART_H_
#define UART_H_

#include "DIO.h"

#define FREQ    80000
#define Desired_BR  96

void UART_Init(void);

void UART_Transferpass(uint8 PASS);

void UART_TransferStringpass(uint8* strpass);

uint8 UART_Recievepass(void);


#endif /* UART_H_ */