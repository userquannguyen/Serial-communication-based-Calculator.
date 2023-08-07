#include <cal.h>
#define ENTER 13
#define plus '+'
#define minus '-'
#define multiply '*'
#define divide '/'
#define remainder '%'
#define exponent '^'
#define factorial '!'
#include <stdio.h>
#include <math.h>
#include <mienthuc.c>
#include <mienphuc.c>
#include <hang.c>
#use delay(clock=20M)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)
//!void loiSyntax()
//!{
//!    printf("Loi SYNTAX");
//!    output_high(PIN_C0);
//!}
void chonmien()
{
   printf("Mien thuc: nhan R hoac r");
   putc(13);
   delay_ms(100);
   printf("Mien phuc: nhan C hoac c");
   putc(13);
   delay_ms(100);
   printf("Hang so: nhan H hoac h");
   putc(13);
   delay_ms(100);
}
void thuchien()
{
   chonmien();
   char mien=getc();
   if(mien == 'H' || mien == 'h'){hang();}
   else if (mien=='R' || mien =='r'){mienthuc();}
   else if (mien =='C'|| mien =='c'){mienphuc();}
   else {loiSyntax();}
}
void main()
{
   setup_uart(9600);
   // TODO: USER CODE!!
   while(1)
{
   
   //bat dau mien thuc
   thuchien();
   printf("Ban co muon tiep tuc!"); putc(13);
   printf("Tiep tuc thi nhan C hoac c");putc(13);
   char tt = getc();
   if (tt =='C'|| tt =='c')
   {
      tt = 0;
      output_low(pin_C0);
      thuchien();
   }
   else
   {
      printf("Xin cam on ban!");putc(13);
      printf("KET THUC");
      break;
   }
}}
