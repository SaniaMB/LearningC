#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char input[100];  

    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    printf("Enter text to write to the file (max 100 characters): ");
    fgets(input, sizeof(input), stdin); 

    fprintf(fp, "%s", input);  

    fclose(fp);

    printf("Data written to output.txt successfully.\n");

    return 0;
}
