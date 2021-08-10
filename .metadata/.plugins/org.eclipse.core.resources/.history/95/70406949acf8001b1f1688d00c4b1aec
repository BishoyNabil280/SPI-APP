 /******************************************************************************
 *
 * Module: SPI
 * Author: Bishoy Nabil
 *
 *******************************************************************************/

#ifndef SPI_H_
#define SPI_H_

#include "../../compiler.h"
#include "../../micro_config.h"
#include "../../common_macros.h"
#include "spi_registers.h"
#include "../DIO/DIO.h"

/*********************		APIs     ***********************/
void SPI_initMaster(void); 
void SPI_initSlave(void);
void SPI_sendByte(const uint8_t data);
uint8_t SPI_recieveByte(void);
void SPI_sendString(const uint8_t *Str);
void SPI_receiveString(uint8_t *Str);

#endif
