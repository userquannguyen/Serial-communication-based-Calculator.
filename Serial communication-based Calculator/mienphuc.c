#use delay(clock=20M)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)
float biendo(long long a, long long b)
{
   float x;
   return x = sqrt((a*a)+(b*b));
}
void mienphuc()
      {
         printf("Phep toan don gian: nhan T hoac t");putc(13);
         printf("Tinh bien do: nhan B hoac b");putc(13);
         printf("So phuc lien hop: nhan H hoac h");putc(13);
          signed long long a,b,a1,a2,b1,b2;
          char cn1;
       for (;;)
         {
            cn1 = getc();
            if (cn1=='t'||cn1=='T')
            {
               printf("So phuc 1: a1 + jb1");putc(13);
               printf("Nhap a1: "); a1 = nhap_so();           
               printf("Nhap b1: "); b1 = nhap_so();
               printf("So phuc 2: a2 + jb2");putc(13);
               printf("Nhap a2: "); a2 = nhap_so();
               printf("Nhap b2: "); b2 = nhap_so();
               printf("Nhap phep tinh: ");
               switch(getc())
               {
               case plus:printf("+");putc(13);printf("Ket qua la: %ld + j(%ld)",a1+a2,b1+b2);putc(13);break;                            
               case minus:printf("-");putc(13);printf("Ket qua la: %ld + j(%ld)",a1 - a2, b1 - b2);putc(13);break;
               case multiply:
                 printf("*"); putc(13);printf("Ket qua la: %ld + j(%ld)",a1*a2-b1*b2,a1*b2+a2*b1);putc(13);
                  break;
               case divide: 
                  printf("/");putc(13);
                  if (a2 == 0 || b2 == 0){loiSyntax();break;}
                  else
                  {
                     float x=biendo(a2,b2)*biendo(a2,b2);
                     float c,d;
                     c = ((a1*a2)+(b1*b2))/x;
                     d = ((b1*a2)-(a1*b2))/x;
                     printf("Ket qua la: %f +j(%f)",c,d); putc(13);
                  }
                  break;                 
               }
               //break;
            }
            else if (cn1 == 'b' || cn1 == 'B')
            {
               printf("So phuc :A = a + jb");putc(13);
               printf("Nhap a: "); a = nhap_so();
               printf("Nhap b: "); b = nhap_so();
               float x =biendo(a,b);
               printf("Bien do = %f",x);putc(13);break;
            }
            else if (cn1 == 'h' || cn1 == 'H')
            {
               printf("So phuc :A = a + jb");putc(13);
               printf("Nhap a: "); a = nhap_so(); 
               printf("Nhap b: "); b = nhap_so(); 
               printf("Ket qua la: %ld + j(%ld)",a,-b);putc(13);break;
            }
            else{loiSyntax();putc(13);}
            break;
         }
       printf("Ket thuc mien phuc");putc(13);break;
      } // ket thuc mien phuc
      
