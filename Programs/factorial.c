#include<stdio.h>
int main(){

int i , n , fact=1;
printf("enter a value:");
scanf("%d",&n);

i=n;

while(i>=1){
    fact=fact*i;
    i=i-1;
}
printf("%d\n",fact);


    return 0;
}