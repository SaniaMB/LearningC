#include<stdio.h>
struct student{
    char name[10];
    float cgpa;
};
int main(){
 
 struct student student1={"bro", 3.0};
 struct student student2={"sania", 4.5};
 struct student student3={"anjum", 6.2};
 struct student student4={"sho", 9.9};

struct student students[]={student1,student2,student3,student4};

for(int i=0;i<sizeof(students)/sizeof(students[0]);i++){
    printf("%-6s\t",students[i].name);
    printf("%.2f\n",students[i].cgpa);
}

    return 0;
}