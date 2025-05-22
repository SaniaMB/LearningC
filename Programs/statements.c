#include <stdio.h>
int main(){
    // format specifier
    //this is a comment
    /*this
    is 
    a
    multiline
    comment
    */
int x;
x = 23;
int age = 19;
float cgpa = 7.90;
char grade = 'A';
char name[] = "bro";
printf("hello %s\n" , name);
printf("you are %d years old\n" ,age);
printf("your grade is %c",grade);
printf("your cgpa %0.02f\n",cgpa);
    return 0;
}
