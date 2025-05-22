#include<stdio.h>

int main(){
 FILE* fptr;
 fptr=fopen("file2.txt","w");

 fputs("C is a fun programming language\n",fptr);
 fputs("And, I love using c language",fptr);

 fclose(fptr);
 
    return 0;
}