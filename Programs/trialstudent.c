#include <stdio.h>
int main()
{
struct student {
char name[50];
int age;
char grade;
float gpa;
};
struct student s;

printf("Enter student name: ");
scanf("%s",&s.name);

printf("Enter student age: ");
scanf("%d", &s.age);

printf("Enter student grade (e.g., A, B, C): ");
scanf(" %c", &s.grade);

printf("Enter student GPA: ");
scanf("%f", &s.gpa);

printf("\n--- Student Information ---\n");
printf("Name: %s\n", s.name);
printf("Age: %d\n", s.age);
printf("Grade: %c\n",s.grade);
printf("GPA: %.2f\n", s.gpa);

return 0;
}