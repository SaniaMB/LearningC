#include <stdio.h>
#include <ctype.h>
int main(){
char unit;
float temp;
printf("\nIs the temperature in (F) or (C)?");
scanf("%c",&unit);
unit= toupper(unit);
if(unit=='C'){
printf("\n Enter the temperature in celsius:");
scanf("%f", &temp);
temp=(temp*9/5)+32;
printf("\nThe temp in celsius is: %.0f",temp);
}
else if(unit=='F'){
    printf("\n Enter the temperature in farenheit:");
scanf("%f", &temp);
temp=((temp-32)*5)/9;
printf("\nThe temp in farenheit is: %.0f",temp);
}
else{
    printf("%c is not a valid unit of measurement",unit);
}
    return 0;
}