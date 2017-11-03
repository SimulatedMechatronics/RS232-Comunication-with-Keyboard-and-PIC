/***************************************************/
/*                                                 */
/*               KeyBoard 3x4 Driver               */
/*                                                 */
/*  Arquivo: keyboard3x4.h                         */
/*  Autor: Jose Ailton B. Silva                    */
/*  Data: 01-04-2012                               */
/*  E-mail: ailton.ifce@gmail.com                  */
/*                                                 */
/*                                                 */
/*   FUNCOES PRINCIPAIS                            */
/*                                                 */
/*   get_key()    <- varre o teclado uma vez       */
/*   keyboard     <- variavel guarda o resultado   */
/*                   na varredura                  */
/*                                                 */
/***************************************************/
#ifndef COL0            // Define colunas padroes caso
   #define COL0 PIN_A0  // nao definidas
#endif
#ifndef COL1
   #define COL1 PIN_A1
#endif
#ifndef COL2
   #define COL2 PIN_A2
#endif

#ifndef ROW0            //Define linhas padroes caso
   #define ROW0 PIN_B4  // nao definidas
#endif
#ifndef ROW1
   #define ROW1 PIN_B5
#endif
#ifndef ROW2
   #define ROW2 PIN_B6
#endif
#ifndef ROW3
   #define ROW3 PIN_B7
#endif

#define TEMPO 0       //Define pausa entre varredura zero por padrao
char keyboard[13]="abcdefghijlm";
char get_key() {  //
   output_high(ROW0);
   output_low(ROW1);
   output_low(ROW2);
   output_low(ROW3);
   if(input_state(COL0)) keyboard[0]='1';
   else keyboard[0]='a';
   if(input_state(COL1)) keyboard[1]='2';
   else keyboard[1]='b';
   if(input_state(COL2)) keyboard[2]='3';
   else keyboard[2]='c';
   delay_ms(TEMPO);
   output_low(ROW0);
   output_high(ROW1);
   output_low(ROW2);
   output_low(ROW3);
   if(input_state(COL0)) keyboard[3]='4';
   else keyboard[3]='d';
   if(input_state(COL1)) keyboard[4]='5';
   else keyboard[4]='e';
   if(input_state(COL2)) keyboard[5]='6';
   else keyboard[5]='f';
   delay_ms(TEMPO);
   output_low(ROW0);
   output_low(ROW1);
   output_high(ROW2);
   output_low(ROW3);
   if(input_state(COL0)) keyboard[6]='7';
   else keyboard[6]='g';
   if(input_state(COL1)) keyboard[7]='8';
   else keyboard[7]='h';
   if(input_state(COL2)) keyboard[8]='9';
   else keyboard[8]='i';
   delay_ms(TEMPO);
   output_low(ROW0);
   output_low(ROW1);
   output_low(ROW2);
   output_high(ROW3);
   if(input_state(COL0)) keyboard[9]='*';
   else keyboard[9]='j';
   if(input_state(COL1)) keyboard[10]='0';
   else keyboard[10]='l';
   if(input_state(COL2)) keyboard[11]='#';
   else keyboard[11]='m';
   delay_ms(TEMPO);
   return 0;
}
