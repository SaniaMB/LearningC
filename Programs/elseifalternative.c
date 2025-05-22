#include <stdio.h>
int main()
    {
        char grade;
        printf("\nEnter you grade here:");
        scanf("%c",&grade);
        switch(grade){
            case 'A':
            printf("perfect\n");
            break;
            case 'B':
            printf("You did good\n");
            break;
            case 'C':
            printf("Its okay\n");
            break;
            case 'D':
            printf("atlaest its not an F\n");
            break;
            case 'F':
            printf("YOU FREAKING FAILED!\n");
            break;
            default:
            printf("Please enter a valid grade");
        }
        return 0;
    }
