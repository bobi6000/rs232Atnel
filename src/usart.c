/**
 *
 */
#include "main.h"
void USART_init (uint16_t ubrr){
	UBRRH = (uint8_t)ubrr>>8;
	UBRRL = (uint8_t)ubrr;
	UCSRB = (1<<RXEN)|(1<<TXEN);
	UCSRC = (1<<URSEL)|(1<<USBS)|(3<<UCSZ0);
}
