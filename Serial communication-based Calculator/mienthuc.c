#use delay(clock=20M)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)
signed long long power(signed long long a,signed long long b) {
    long long result = 1;
    for(int i = 1; i <= b; i++) {
        result *= a;
    }
    return result;
 }
void loiSyntax()
{
    printf("Loi SYNTAX");putc(13);
    output_high(PIN_C0);
}
signed long long nhap_so()
{
   nhapso: 
    char n=0 ,k=0;
    signed long long t=0;
    for (int i=0;;i++)
    {
     n = getc();
     if ( n >= '0' && n <= '9' || n == minus || n == ENTER) {
     if (n == minus){i = i - 1;k=n;printf("-");}
     else if (n == ENTER){putc(13);return t;break;}
     else
     {if(k == minus){printf("%c",n);n = n - 0x30;t = t*10 - n;}
      else{printf("%c",n);n = n - 0x30;t = t*10 + n;}
     }}
     else {printf("Chi nhap ki tu so, moi nhap lai");putc(13);goto nhapso;}
    }
    putc(13);
}
void mienthuc(){
   printf("Phep toan don gian: nhan T hoac t");putc(13);
   printf("Giai phuong trinh bac 1: nhan P hoac p");putc(13);
   printf("Tinh so mu a^b: nhan M hoac m");putc(13);
   printf("Tri tuyet doi: nhan D hoac d");putc(13);
   printf("Kiem tra so nguyen to nhan N hoac n");putc(13);
   char cn1;
   signed long long a=0,b=0,c=0;
   float a1,b1,c1,x;
   cn1 = getc();
   if (cn1 == 'T' || cn1 == 't')
   {
   printf("Phep tinh don gian");putc(13);
   printf("Nhap a: ");
   a = nhap_so();
   printf("Nhap b: ");
   b = nhap_so();
   printf("Nhap phep tinh: ");
   switch(getc())
   {
   case plus: printf("+");putc(13);printf("Ket qua %ld + %ld = %ld",a,b,a+b);putc(13); break;
   case minus: printf("-");putc(13);printf("Ket qua %ld - %ld = %ld",a,b,a-b);putc(13); break;
   case multiply: printf("*");putc(13);printf("Ket qua %ld * %ld = %ld",a,b,a*b);putc(13); break;
   case divide:
   printf("/");putc(13);
   if ( b == 0){loiSyntax();} 
   else
   {
   a1 = a;
   b1 = b;
   x = a1/b1;
   printf("Ket qua %ld / %ld = %f",a,b,x);}
   putc(13);
   break;  
   default: loiSyntax();break;
   break;
   }
   }
   else if ( cn1 == 'P' || cn1 == 'p')
   { 
   printf("Phuong trinh bac 1: ax + b = c");putc(13);
   printf("Nhap a: "); a = nhap_so();a1=a;
   printf("Nhap b: "); b = nhap_so();b1=b;
   printf("Nhap c: "); c = nhap_so();c1=c;
   if (a == 0 ) {loiSyntax();}
   else{
   x = (c1-b1)/a1;
   printf("x = %f",x);putc(13);}
   }
   else if(cn1 == 'm' || cn1 == 'M')
   {
   printf("Tinh so mu");putc(13);
   printf("Nhap a: "); a = nhap_so();
   printf("Nhap b: "); b = nhap_so();
   printf("%ld^%ld = %ld",a,b,power(a,b)); putc(13);
   }
 else if (cn1=='D' || cn1=='d')
   {
   printf("Tri tuyet doi");putc(13);
   printf("Nhap a: ");
   a = nhap_so();
   if ( a>= 0 ) {printf("|%ld| = %ld",a,a);putc(13);}
   else {printf("|%ld| = %ld",a,-a);putc(13);}  
   }
   else if (cn1 == 'N' || cn1 == 'n')
   {
   int kt=1;
   printf("Kiem tra so nguyen to");putc(13);
   printf("Nhap a: "); a = nhap_so();
   if (a == 0|| a==1){printf("a khong phai so nguyen to"); putc(13); kt=0;}
   else 
   {
      for(int i=2; i<=a/2; i++)
         {
            if((int) a % i ==0) {printf("a khong phai so nguyen to"); putc(13); kt=0;break;}
         }
   }
   if(kt) {printf("a la so nguyen to"); putc(13);}
   else {printf("a khong phai so nguyen to"); putc(13);}
   }
   else {loiSyntax();}
}
 //ket thuc mien thuc


