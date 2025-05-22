#include<stdio.h>
float celtofaren(float);
float farentocel(float);
int main(){
    float temp,convertedtemp;
    char choice;

    printf("Enter the temperature for conversion:\n");
    scanf("%f",&temp);
    printf("choose the temp unit C for celcius and F for farenhiet:\n");
    scanf(" %c",&choice);
    if(choice =='C'|| choice =='c'){
      convertedtemp = celtofaren(temp);
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temp, convertedtemp);
    }else if(choice=='F'|| choice=='f'){
        convertedtemp = farentocel(temp);
         printf("%.2f celsius is equal to %.2f farenheit.\n", temp, convertedtemp);
    }else{
        printf("Not a valid unit\n");
    }

    return 0;
}
float celtofaren(float cel){
   return (cel*9/5)+32;
}
float farentocel(float faren){
   return (faren-32)*5/9;
}