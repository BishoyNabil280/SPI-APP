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
#include "../MCAL/UART/UART.h"

#define STR_SIZE 256
uint8_t Str[STR_SIZE];

void System_Update()
{
	SPI_ReceiveString(Str);
	UART_sendString(Str);
}

void System_Init()
{
	UART_init();
	SPI_initSlave();
}

int main(void){

	System_Init();

	while(1)
	{
		System_Update();
	}
	return 0;
}

