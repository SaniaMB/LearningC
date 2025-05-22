#include <stdio.h>

void concatenateStrings(char *str1, char *str2);
void removeNewline(char *str);

int main() {
    char str1[100], str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewline(str1); 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewline(str2);  

    concatenateStrings(str1, str2);

    printf("Concatenated String: %s\n", str1);

    return 0;
}

void removeNewline(char *str) {
    while (*str) {
        if (*str == '\n') {
            *str = '\0';
            break;
        }
        str++;
    }
}

void concatenateStrings(char *str1, char *str2) {
    
    while (*str1) {
        str1++;
    }

    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}
