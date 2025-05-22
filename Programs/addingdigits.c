#include <stdio.h>

int main() {
    int number, sum = 0;

    // Read the five-digit integer from user input
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Ensure the input is a five-digit number
    if (number < 10000 || number > 99999) {
        printf("Please enter a valid five-digit number.\n");
        return 1; // Exit the program with an error code
    }

    // Loop to extract and sum the digits
    for (int i = 0; i < 5; i++) {
        // Get the last digit using % 10 and add it to the sum
        sum += number % 10; 
        // Remove the last digit
        number /= 10;       
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}
