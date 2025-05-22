#include <stdio.h>
#include<math.h>

int main() {
    // Write C code here
    float b;
    float h;
    float c;
   float area;
   float peri;
    printf("Enter the value of side A of a triangle");
    scanf("%f",&b);
    printf("Enter the value of side B of a triangle");
    scanf("%f",&h);
    area = 0.5*b*h;
    c = sqrt(b*b+h*h);
    peri=b+h+c;
    printf("Triangle area:%0.0f",area);
    printf("\nTriangle area:%.0f",peri);
    return 0;
}