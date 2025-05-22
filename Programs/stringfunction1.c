#include <stdio.h>
#include<string.h>

int main() {
  char str1[100];
  char str2[100];
  
  fgets(str1,sizeof(str1),stdin);
  fgets(str2,sizeof(str2),stdin);

//strcpy(str2,str1);
//printf("%s\n",str2);

//str1[strcspn(str1, "\n")] = '\0';
//strcat(str1,str2);
//printf("%s",str1);

 // printf("%d\n",strcmp(str1,str2));
  
  

    return 0;
}