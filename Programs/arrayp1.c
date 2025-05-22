#include <stdio.h>

int main() {
  int marks[5],sum=0,i;
  float result;
  
  printf("Enter 5 subject marks:");
  
  for(i=0;i<5;i++)
{
    scanf("%d",&marks[i]);
}

for(i=0;i<5;i++)
{
    sum=sum+marks[i];
}

result = sum/5;

printf("The sum is %d\n",sum);
printf("The average marks are %.2f\n",result);

    return 0;
}