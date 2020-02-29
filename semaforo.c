
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#
 
int main(){
     
  DDRB  = 0b00111000; //Pino 13 como saída e resto como entrada.
  PORTB = 0b00000000; //Todos os pinos em nível alto 
  while(1){
  
  
    if((PINB & 0b00000100)==0)    { //Se a entrada PINB AND bit a bit 0b00000100 == 0 entra no laço
     PORTB = 0b00000000; // Desligado
    }
    else{  // Se nao faça a sequencia
    
    PORTB = 0b00001100;
    _delay_ms( 1000 );
    PORTB = 0b00010000;
    _delay_ms( 1000 );
    PORTB = 0b00100000;
    _delay_ms( 1000 );
     PORTB = 0b00110000;
      _delay_ms( 1000 );
    
    
    
    }
    
  }
  return 0;
}