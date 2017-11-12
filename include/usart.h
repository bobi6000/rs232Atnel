#ifndef USART_H

#define USART_H
#define UART_BAUD 9600
#define __UBRR ((F_CPU+UART_BAUD+8UL)/(16UL*UART_BAUD)-1)


void USART_init (unsigned int ubrr);

#endif
