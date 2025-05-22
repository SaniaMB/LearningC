#include <stdio.h>

int main() {
    int n,remainder, sum=0;
    printf("Enetr a number\n");
    scanf("%d", &n);
    // Complete the code
    while(n!=0){
        remainder = n%10;
        sum += remainder;
        n/=10;
    }
    printf("%d",sum);
    
    return 0;
}