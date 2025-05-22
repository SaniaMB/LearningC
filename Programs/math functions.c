#include <stdio.h>
#include <math.h>  // To use math functions
#include <stdlib.h>
int main()
{
    /* If exact precision or fractions are not required 
    and a basic form of counting is needed, then Ints are typically used instead.*/
    double a =sqrt(9);
    double b = pow(2,4);
    int c = round(3.14);
    int d = ceil(3.14);
    int e= floor(3.99);
    double f =abs(-100);
    double g=log(3);
    double h = sin(45);
    double i =cos(45);
    double j =tan(45);


printf("%lf",j);
return 0;
}