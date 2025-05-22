#include <stdio.h>
int max_of_four(int,int,int,int);
int max(int, int);
int main() 
{
 int a, b, c, d;

printf("Enter four values:");
scanf("%d%d%d %d",&a,&b,&c,&d);
printf("The maximum of %d, %d, %d, and %d is %d\n", a, b, c, d, max_of_four(a, b, c, d));

return 0;
}

int max(int x, int y) 
{
    return (x > y) ? x : y;
}
int max_of_four(int a, int b, int c, int d)
 {
    return max(max(a, b), max(c, d));
}
