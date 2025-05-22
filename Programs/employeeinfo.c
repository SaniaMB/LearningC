#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

void inputEmployee(struct Employee *e);
void displayEmployee(struct Employee e);

int main() {
    struct Employee employees[3]; 

    for(int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d\n", i+1);
        inputEmployee(&employees[i]);
    }

    for(int i = 0; i < 3; i++) {
        printf("\nEmployee %d Details:\n", i+1);
        displayEmployee(employees[i]);
    }
   
    return 0;
}

void inputEmployee(struct Employee *e) {
    printf("Enter employee ID: ");
    scanf("%d", &e->empId);
    getchar(); 

    printf("Enter name: ");
    fgets(e->name, sizeof(e->name), stdin);

    for(int i = 0; e->name[i] != '\0'; i++) {
        if(e->name[i] == '\n') {
            e->name[i] = '\0';
            break;
        }
    }

    printf("Enter salary: ");
    scanf("%f", &e->salary);
}

void displayEmployee(struct Employee e) {
    printf("Employee ID: %d\n", e.empId);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}
