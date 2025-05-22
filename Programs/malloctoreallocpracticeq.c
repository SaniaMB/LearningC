#include <stdio.h>
#include <stdlib.h>

int main(){
  int n = 4;
  int* ages;
  
  ages=(int*) malloc(n*sizeof(int));
  if(ages==NULL){
      printf("Memory cannot be allocated");
      return 0;
  }
  
  printf("Enter 4 age:\n");
  for(int i=0;i<n;i++){
      scanf("%d",ages+i);
  }
  
  printf("The ages are:\n");
  for(int i=0;i<n;i++){
  printf("%d\n",*(ages+i));
  }
  
  n=6;
  ages[4]=32;
  ages[5]=59;
  
  ages=realloc(ages,n*sizeof(int));
  
  printf("Newly allocated values\n");
  for(int i=0;i<n;i++){
      printf("%d\n",*(ages+i));
  }
  
  free(ages);
  
  return 0;
}