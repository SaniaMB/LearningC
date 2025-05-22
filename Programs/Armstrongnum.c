#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    // Calculate the sum of powers of digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    // Check if the number is an Armstrong number
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
