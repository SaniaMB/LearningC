#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=4;
    int* ptr;
    
    ptr= (int*) malloc(n*sizeof(int));

    if(ptr== NULL ){
        printf("Memory cannot be allocated\n");
        return 0;
    }
    
    printf("Enter input values\n");
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    
    printf("The input values are\n");
    for(int i =0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    
    free(ptr);
    
    return 0;
    
}