#include <stdio.h>

int fibonacci(int);

int main() 
{
    int m,i;
  
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &m);
    printf("Fibonacci series up to %d terms:\n", m);
    for (i = 0; i < m; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
