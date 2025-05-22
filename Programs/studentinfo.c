#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter name: ");
    getchar();  
    fgets(student.name, sizeof(student.name), stdin);

    for(int i = 0; student.name[i] != '\0'; i++) {
        if(student.name[i] == '\n') {
            student.name[i] = '\0';
            break;
        }
    }

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
