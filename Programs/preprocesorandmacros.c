#include <stdio.h>
#define PI 3.1415
#define carea(r)(PI * r * r)

int main(){
    double radius = 12.4;
    //double area = PI * radius * radius;
    
    double area = carea(radius);

    printf("%.4lf\n",PI);
    printf("%.2lf\n",area);

    return 0;
}