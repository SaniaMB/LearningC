#include <stdio.h>

int main(){
    int i=1,num,count=0;
    printf("Enter a value");
    scanf("%d",&num);

    if(num<=1){
        printf("Is not a prime number");
    } 
   else{
    while(i<=num){
        if(num % i == 0)
        count++;
        i++;
    }
    if(count==2){
        printf("Is a prime number");
    }
    else{
        printf("Is not a prime number");
    }

   }
    return 0;
}