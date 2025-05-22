#include <stdio.h>

int main(){

    // logical operator = || (OR) checks if atleast one condition is true

    float temp;
   printf("Enter your city's current temperature");
   scanf("%f",&temp); 
   if (temp<=0 || temp >=30){ // can add another set of vertical bars
    printf("\nThe weather is bad!");
   }         
   else {
    printf("The weather is good");
   }

    return 0;
}