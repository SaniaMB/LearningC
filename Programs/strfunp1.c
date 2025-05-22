#include <stdio.h>
#include<string.h>

int main() {
  
  char A[100];
  char B[100];
  
  printf("Enter two strings:");
  fgets(A,sizeof(A),stdin);
  fgets(B,sizeof(B),stdin);

A[strcspn(A, "\n")] = '\0';  //string name[strcspn(string name,"\n")]="\0"

if(strlen(A)<strlen(B)){
    printf("Length of %s is smaller than %s",A,B);
}
else{
     printf("Length of %s is greater than %s",A,B);
}
 
    return 0;
}