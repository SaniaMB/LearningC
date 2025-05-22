#include <stdio.h>

int main(){
    int marks;

    printf("Enter yor numeric grade from 1-100\n");
    scanf("%d",&marks);

    if(marks>=90 && marks<=100){
        printf("Your letter grade is A\n");
    }

     else if(marks>=80 && marks<=89){
        printf("Your letter grade is B\n");
    }

    else if(marks>=70 && marks<=79){
        printf("Your letter grade is C\n");
    }

     else if(marks>=60 && marks<=69){
        printf("Your letter grade is D\n");
    }

    else{
        printf("You FAILED\n");
    }

    return 0;
}