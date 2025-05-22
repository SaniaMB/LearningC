#include<stdio.h>

int main(){
    FILE* fptr;
    fptr= fopen("file.txt","r");

    char content[1000];

    if(fptr!=NULL){
       // printf("File open sucessful\n");
       int i;
       while(fgets(content,1000,fptr)){
       printf("%s",content);
       i++;
       }
       printf("\n");
    }
    else{
        printf("File opening was unsucessful.\n");
    }
    fclose(fptr);
    return 0;
}