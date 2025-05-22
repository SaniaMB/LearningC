#include <stdio.h>
//#include <conio.h>                                         
//void main()
int main(){
   int a = 10 ,  *p;
   float b=20.5, *q;
   char c='z', *r;
 //clrscr
   p=&a;
   q=&b;
   r=&c;

   printf("Before : p address = %u, \n q address = %u, \n r address = %u \n",p , q , r );

   p++;
   q++;
   r++;

      printf("After : p address = %u, \n q address = %u, \n r address = %u \n",p , q , r );

    //getch
    return 0;
}