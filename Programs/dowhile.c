#include <stdio.h>

int main(){

// while loop = checks a condition, then executes a block of code if condition is true
// do while loop = always executes a block of code once, then checks a condition

   int n = 0, sum=0;
   do{
    printf("Enter a number");
    scanf("%d",&n);
    if(n>0){
    sum += n;
   }
   }while(n>0);
   printf("%d\n",sum);
    return 0;
}