#include <stdio.h>

int main(){
   int n , remainder;
   scanf("%d",&n);
   while(n!=0){
    remainder = n%10;
    printf("%d",remainder);
    n /= 10;
   }   
   printf("\n");
    return 0;
}