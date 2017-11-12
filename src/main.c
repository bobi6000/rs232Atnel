#include "main.h"



volatile uint8_t i;
 uint8_t stan=0,stan2=0,clock_1s;



int main (void){



///Tryb porównania CTC
	TCCR0&=(~(1<<WGM00));
	TCCR0|=1<<WGM01;
///Preskaler na 8
	TCCR0|=(~(1<<CS00));
	TCCR0&=1<<CS01;
	TCCR0|=(~(1<<CS02));
////Ustawienie f=5kHz
	OCR0=99U;

	USART_init(__UBRR);




clock_1s=0U;

	sei();



	///Enable Timer0
		TIMSK|=(1<<OCIE0);
i=1;


	while(1){

		}

}

ISR(TIMER0_COMP_vect){

	clock_1s++;
}
