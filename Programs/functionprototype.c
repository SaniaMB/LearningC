#include <stdio.h>

void birthday(char[],int); // function prototype   //void birthday(char name[],int age); this would work too

int main(){


    // WHAT IS IT?
    /* Function decalration, w/o a body, before main()
      Ensures that calls to a function are made with the correct arguments */

     // IMPORTANT NOTES
     /* Many c compilers do not check for parameter matching
        Missing arguments will result in unexpected behaviour
        A function prototype causes the compiler to flag an error if argumens are missing */
   
char name[] = "bro";
int age = 19;


birthday(name,age); 

   
    return 0;
}

void birthday(char name[],int age){
    printf("HAPPY BIRTDAY DEAR %s",name);
    printf("\nYOU ARE %d YEARS OLD",age);
}
