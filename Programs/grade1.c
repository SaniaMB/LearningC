#include <stdio.h>

int main() {
int grade;
char letterGrade;

printf("Enter the numeric grade: ");
scanf("%d", &grade);
if (grade >= 90) {
letterGrade = 'A';
} else if (grade >= 80) {
letterGrade = 'B';
} else if (grade >= 70) {
letterGrade = 'C';
} else if (grade >= 60) {
letterGrade = 'D';
} else {
letterGrade = 'F';
}
printf("The letter grade is: %c\n", letterGrade);

return 0;
}