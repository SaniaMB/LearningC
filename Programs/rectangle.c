#include <stdio.h>
int main(){
    int l,b,area,peri;
printf("Enter the length and breadth\n");
scanf("%d%d",&l,&b);
area = l*b;
peri = 2*(l+b);
printf("the area of the rectangle is:%d\n",area);
printf("the peri of the rectangle is:%d\n",peri);
    return 0;
}