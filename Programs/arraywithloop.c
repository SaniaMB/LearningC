#include <stdio.h>

int main(){

// array = a data structure that can store many values of the same data type

double prices[] = {5.0 ,10.0,15.0,20.0,25.0,30.0,35.5,40.0};

//printf("$%.2lf\n",prices[1]);

printf("%lu bytes\n",sizeof(prices));

for(int i = 0 ; i < sizeof(prices)/sizeof(prices[0]) ; i++)  //add or remove our elements freely without having to update our code
{
    printf("$%.2lf\n",prices[i]);
}
   
    return 0;
}