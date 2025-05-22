#include <stdio.h>
int main()
{
    char name[25];
    int age;
    printf("\nwhats your name");
     fgets(name,25,stdin);
   printf("\n how old are you?");
   scanf("%d",&age);
   printf("you are %d years old\n",age);
printf("my name is %s",name);
}