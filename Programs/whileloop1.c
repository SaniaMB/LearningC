#include <stdio.h>
#include <string.h>
int main(){
    // while loop= repeats a section of code possibly unlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[25];

    printf("\nwhats your name?:");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';

       // while(name){
       while(strlen(name)==0){
        printf("\n You did not enter your name");
        printf("\nwhats your name?:");
        fgets(name,25,stdin);
      name[strlen(name)-1] = '\0';

    }
   
    printf("Hello %s", name);
  

   
    return 0;
}