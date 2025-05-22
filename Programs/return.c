#include <stdio.h>

double square(double x){
     return x * x;   }                 // double result = x * x;               
                                      // return result;                          

int main(){
   
// retun = returns a value back to a calling function

double x = square(3.14);
printf("%.2lf",x);
   
  return 0;  
}