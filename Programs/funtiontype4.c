#include <stdio.h>
int add(int,int);
int main() 
{
    int a,b;
     printf("enter two values\n");
     scanf("%d%d",&a,&b);
   int e=add(a,b);
      printf("the addition of %d and %d is %d\n",a,b,e);
    

    return 0;
}
int add(int c,int d)
{
   int y=c+d;
  return y;
    
}