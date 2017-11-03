#include <16f628a.h>
#use delay(clock=4M)
#fuses HS, NOMCLR
#use rs232(baud=9600, xmit=PIN_B1, rcv=PIN_B2)
#include "keyboard3x4.h" // Biblioteca de controle de teclado criado por Ailton
void main() {
   while(true) {
      get_key();  // Funcao de varredura de teclado 3x4 da Biblioteca KEYBOARD3X4.H
      putc('X');  // Byte de Inicio de protocolo
      printf("%s",keyboard); // Variavel "keyboard" contem resultado de varredura pela biblioteca keyBoard3x4.h
      delay_ms(500);
   }
}
