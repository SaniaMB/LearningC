#include <stdio.h>

int main() {
  char str[50];
  printf("Enter your name:\n");
  fgets(str,sizeof(str),stdin);
  str[0]='X';
  printf("%s",str);

    return 0;
}