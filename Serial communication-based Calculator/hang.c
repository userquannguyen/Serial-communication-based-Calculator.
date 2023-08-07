#use delay(clock=20M)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)

void hang()
{
         printf("So pi: nhan P hoac p");putc(13);
         printf("Hang so tu tham u: nhan u");putc(13);
         printf("Hang so dien tham e: nhan Tab");putc(13);
         printf("He so Euler: nhan e");putc(13);
         printf("Toc do anh sang: nhan c");putc(13);
         char cn =getc();
         if (cn == 'p' || cn=='P') {printf("pi = 3.14159");putc(13);}
         else if (cn== 'u') {printf("Hang so tu tham u = 4pix10^-7");putc(13);}
         else if (cn== 9) {printf("Hang so dien tham e = 8.8542x10^-12");putc(13);}
         else if (cn== 'e') {printf("He so Eule e = 2.71828 ");putc(13);}
         else if (cn== 'c') {printf("Toc do anh sang c=3x10^8");putc(13);}
         else {loiSyntax();}
         
}

