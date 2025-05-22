#include <stdio.h>

void print_number_in_words(int n) {
    // Array to hold English words for numbers 1 to 9
    const char *words[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    // Check if the number is between 1 and 9
    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n - 1]); // Print corresponding word
    } else {
        // For numbers greater than 9, check if they are even or odd
        if (n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
}

int main() {
    int a, b;
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    // Loop through each number in the interval from a to b
    for (int i = a; i <= b; i++) {
        print_number_in_words(i); // Call the function to print the result
    }

    return 0;
}
