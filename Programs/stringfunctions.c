#include <stdio.h>
#include <string.h>
int main(){

 char string1[100]= "bro";
 char string2[] = "bod";

// strlen(string1);                                    // converts a string to lowercase
// strupr(string1);                                    // converts a string to uppercase (doesn't work)
// strcat(string1,string2);                            // appends string2 to end of string 1
// strncat(string1,string2,1) ;                        // appends n chracters from string2 to string1
// strcpy(string1,string2);                            // copies string2 to string 1
// strncpy(string1,string2,2);                         // copies n  characters of string2 to string1

// strset(string1,'?');                                // sets all characters of a string to a given character (doesn't work)
// strnset(string1,'x',1);                             // sets first n characters of a string to a given character (doesn't work)
// strrev(string1);                                    // reverses a string (doesn't work)
// printf("%s",string1);

// int result=strlen(string1);                         // retirns string length as int 
// int result = strcmp(string1,string2);               // string compares all characters
// int result = strncmp(string1,string2,1);            // string compares n characters
// int result = strcmpi(string1,string2);              // string compares all (ignore cases) (doesn't work) 
// int result = strnicmp(string1,string2,1);           // string compare n characters (ignore cases) (doesn't work) 
//printf("%d",result);

/*if(result==0){
    printf("These strings are same");
}
else{
    printf("These strings are not same");
}*/
    return 0;
}
