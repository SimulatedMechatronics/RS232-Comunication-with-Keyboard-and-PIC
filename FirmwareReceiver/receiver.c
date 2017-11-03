#include <16f877a.h>
#use delay(clock=4M)
#fuses HS
#use rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7)
char meubuffer[13]="abcdefghijlm";
void main() {
   output_a(0);
   output_b(0);
   while(true) {
      while(!kbhit()){}
      if('X'==getc())
      {
         meubuffer[0]=getc();
         meubuffer[1]=getc();
         meubuffer[2]=getc();
         meubuffer[3]=getc();
         meubuffer[4]=getc();
         meubuffer[5]=getc();
         meubuffer[6]=getc();
         meubuffer[7]=getc();
         meubuffer[8]=getc();
         meubuffer[9]=getc();
         meubuffer[10]=getc();
         meubuffer[11]=getc();
         if(meubuffer[0]=='1') output_high(PIN_B0);
         else if(meubuffer[0]=='a') output_low(PIN_B0);
         if(meubuffer[1]=='2') output_high(PIN_B1);
         else if(meubuffer[1]=='b') output_low(PIN_B1);
         if(meubuffer[2]=='3') output_high(PIN_B2);
         else if(meubuffer[2]=='c') output_low(PIN_B2);
         if(meubuffer[3]=='4') output_high(PIN_B3);
         else if(meubuffer[3]=='d') output_low(PIN_B3);
         if(meubuffer[4]=='5') output_high(PIN_B4);
         else if(meubuffer[4]=='e') output_low(PIN_B4);
         if(meubuffer[5]=='6') output_high(PIN_B5);
         else if(meubuffer[5]=='f') output_low(PIN_B5);
         if(meubuffer[6]=='7') output_high(PIN_B6);
         else if(meubuffer[6]=='g') output_low(PIN_B6);
         if(meubuffer[7]=='8') output_high(PIN_B7);
         else if(meubuffer[7]=='h') output_low(PIN_B7);
         if(meubuffer[8]=='9') output_high(PIN_A0);
         else if(meubuffer[8]=='i') output_low(PIN_A0);
         if(meubuffer[9]=='*') output_high(PIN_A1);
         else if(meubuffer[9]=='j') output_low(PIN_A1);
         if(meubuffer[10]=='0') output_high(PIN_A2);
         else if(meubuffer[10]=='l') output_low(PIN_A2);
         if(meubuffer[11]=='#') output_high(PIN_A3);
         else if(meubuffer[11]=='m') output_low(PIN_A3);
      }
      printf("%s\r",meubuffer);
   }
}
