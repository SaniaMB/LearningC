#include <stdio.h>

int findMax (int x , int y){     // alternate to if/else statements
    return (x > y) ? x: y;
}

int main(){
   
// ternary operator = shortcut to iff/else when assigning/returning a value
// (condition) ? value if true : value if false

int max = findMax(3 , 4);
printf("%d",max);


   
    return 0;
}