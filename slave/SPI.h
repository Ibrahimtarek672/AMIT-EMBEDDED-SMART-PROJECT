


#ifndef SPI_H_
#define SPI_H_

#include "DIO.h"

#define Password '1'

void SPI_Master_Init(void);

void SPI_Slave_Init(void);

void SPI_Master_Init_Trans(void);

void SPI_Master_Ter_Trans(void);

void SPI_Transferpass(uint8 pass);

uint8 SPI_Recievepass(uint8* pass);




#endif /* SPI_H_ */