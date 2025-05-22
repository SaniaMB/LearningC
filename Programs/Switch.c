#include <stdio.h>
//#include<stdlib.h> if you wants to abs for postive answer in sub
//#include<conio.h>
//void main()

int main() {

 int  choice , a ,b, add, sub, mul, div, mod;
 //clrscr

printf("1.Addition\n2.substraction\n3.multiplication\n4.division\n5.modulo\n");


printf("enter your choice\n");
scanf("%d",&choice);

if(choice>=1 && choice<=5){
    printf("enter two values\n");
    scanf("%d \n%d",&a,&b);
}
switch(choice){
    case 1:
    add = a+b;
    printf("the adiition of%d and %d is %d\n",a,b,add);
    break;
    
    case 2:
    sub = a-b;
    printf("the substraction of%d and %d is %d\n",a,b,sub); //a,b,ans(sub) if you want positive answer regardless.
    break;
    
    case 3:
    mul = a*b;
    printf("the adiition of%d and %d is %d\n",a,b,mul);
    break;
    
    case 4:
    div = a/b;
    printf("the adiition of%d and %d is %d\n",a,b,div);
    break;
    
    case 5:
    mod = a%b;
    printf("the adiition of%d and %d is %d\n",a,b,mod);
    break;
    
    default:
    printf("Enter valid choice");
    }

//getch;

    return 0;
}