#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
    int min, max, count, randomNum, i;

    srand(time(0));

    printf("Enter the minimum value of the range: ");
    scanf("%d", &min);
    
    printf("Enter the maximum value of the range: ");
    scanf("%d", &max);
    
    printf("Enter the count of random numbers to generate: ");
    scanf("%d", &count);

    if (min >= max) {
        printf("Invalid range. Minimum value must be less than maximum value.\n");
        exit(0);
    }
    printf("Generated %d random numbers between %d and %d:\n", count, min, max);
    
    for ( i = 0; i < count; i++) 
   {
     randomNum = (rand() % (max - min + 1)) + min; 
     printf("%d ", randomNum);
    }
    
    printf("\n");

return 0;
}
