#include<stdio.h>

int main(){
    FILE* fptr;
    fptr= fopen("file1.txt","w");

    fputs("I love c programming\n",fptr);
    fputs("I am sania\n",fptr);
    fputs("I am sania",fptr);

    fclose(fptr);

    return 0;
}