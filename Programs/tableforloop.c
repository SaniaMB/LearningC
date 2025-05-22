#include <stdio.h>
//#include <conio.h>                                         
//void main()
int main(){
    
  int i;
  int a;
    //clrscr
    printf("enter a number to generate table");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        printf("%d*%d=%d\n",a,i,a*i);
    }
    //getch
    return 0;
}