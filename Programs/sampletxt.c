#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        exit(0);  
    }

    printf("Contents of sample.txt:\n\n");

    while ((ch = fgetc(fp)) != EOF) {  
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
