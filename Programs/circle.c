#include <stdio.h>
int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;
printf("\n enter radius of a circle:");
scanf("%lf",&radius);
circumference= 2 * PI *radius;
area = PI*radius*radius;
printf("circumference:%lf area:%lf",circumference,area);

    return 0;
}