/*
   @summery: This program will blink an LED with fix 500 mili second delay 
   @LED: PORTD.0
   @INPUT: NULL
   @CRYSTAL: 8MHz
   @AUTHOR: Abdul Rehman

*/



#include <16F887.h>
#device *= 16 
#fuses HS,NOWDT,NOPROTECT,NOLVP
#use delay(clock=8000000)

#define LED PIN_D0


void main(){
   
   while(True){
      output_high(LED);
      delay_ms(500);
      output_low(LED);
      delay_ms(500);
   }
}
