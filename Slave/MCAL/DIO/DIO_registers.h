/*
 * DIO_registers.h
 *
 *
 *      Author: Bishoy Nabil
 */

#ifndef DIO_REGISTERS_H_
#define DIO_REGISTERS_H_

#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *(( volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)

#define PORTB *(( volatile uint8_t*)0x38)
#define DDRB *(( volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

#define PORTC *(( volatile uint8_t*)0x35)
#define DDRC *(( volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

#define PORTD *(( volatile uint8_t*)0x32)
#define DDRD *(( volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)

/* PORTC */
#define PC7     7
#define PC6     6
#define PC5     5
#define PC4     4
#define PC3     3
#define PC2     2
#define PC1     1
#define PC0     0

/* PORTB */
#define PB7     7
#define PB6     6
#define PB5     5
#define PB4     4
#define PB3     3
#define PB2     2
#define PB1     1
#define PB0     0


/* PORTA */
#define PA7     7
#define PA6     6
#define PA5     5
#define PA4     4
#define PA3     3
#define PA2     2
#define PA1     1
#define PA0     0


/* PORTD */
#define PD7     7
#define PD6     6
#define PD5     5
#define PD4     4
#define PD3     3
#define PD2     2
#define PD1     1
#define PD0     0

#endif /* DIO_REGISTERS_H_ */
