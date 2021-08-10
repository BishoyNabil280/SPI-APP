 /******************************************************************************
 *
 * Module: SPI
 *
 * Created On: 7/8/2021
 *
 * Author: Bishoy Nabil
 *
 *******************************************************************************/

#ifndef SPI_REGISTERS_H_
#define SPI_REGISTERS_H_

#define SPCR *( ( volatile uint8_t* ) 0x2D )

/* SPCR */
#define SPIE    7
#define SPE     6
#define DORD    5
#define MSTR    4
#define CPOL    3
#define CPHA    2
#define SPR1    1
#define SPR0    0

#define SPSR *( ( volatile uint8_t* ) 0x2E )

/* SPSR */
#define SPIF    7
#define WCOL    6
/* bits 5-1 reserved */
#define SPI2X   0

#define SPDR *( ( volatile uint8_t* ) 0x2F )




#endif /* SPI_REGISTERS_H_ */
