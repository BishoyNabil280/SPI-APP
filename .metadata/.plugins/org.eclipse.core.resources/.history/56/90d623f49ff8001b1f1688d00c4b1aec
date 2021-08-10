/******************************************************************************
 *
 * Module: SPI
 *
 * Created On: 7/8/2021
 *
 * Author: Bishoy Nabil
 *
 *******************************************************************************/

#include "../MCAL/SPI/spi.h"
#include "../MCAL/DIO/DIO.h"



int main(void){

	uint8_t data;
	DDRA=0xFF;
	SPI_initSlave();
	data=SPI_recieveByte();
	PORTA=data;

	while(1)
	{

	}
	return 0;
}
