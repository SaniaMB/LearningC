#include <stdio.h>
#include <math.h>
int main()
{
double A;
double B;
double C;
printf("Enter side A:",A);
scanf("%lf",&A);
printf("Enter side B:",B);
scanf("%lf",&B);
C=sqrt(A*A+B*B);
printf("Value of C:%lf",C);

    return 0;
}