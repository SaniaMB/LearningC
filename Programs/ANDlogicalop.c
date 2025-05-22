#include <stdio.h>
#include<stdbool.h>
int main(){
    // logical operators = && (AND) checks if two conditions are two
float temp = 15;
bool sunny = 1; // (1=true) (0=false)
if (temp>=0 && temp<=30 && sunny){
    printf("The weather is good!");
}
else{
    printf("The weather is bad!");
}
    return 0;
}