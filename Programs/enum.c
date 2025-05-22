#include <stdio.h>

enum days{
    sunday=1,
    monday=2,
    tuesday=3,
    wednesday=4,
    thursday=5,
    friday=6,
    saturday=7
}weekend1,weekend2;

int main(){

// enum = a user type of named integer identifiers which 
//        helps to make a program more readable .

   enum days today=sunday;
   weekend1=saturday;
   weekend2=sunday;
    
    printf("%d\n",today);
    printf("%d\n",weekend1);
    printf("%d\n",weekend2);

    if(today==1 || today==7){      // if(today==sunday || today==saturday) = lot more readable .
        printf("Its the weekend! party time!\n");
    }
    else{
        printf("I have to work today\n");
    }
    
    return 0; }