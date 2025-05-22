#include<stdio.h>
//include<conio.h>
//void main()
int main(){
int prelims,mains,interview;
//clrscr();
printf("Enter prelims marks");
scanf("%d",&prelims);
if (prelims>=85){
    printf("You have passed prelims\n");
    printf("Enter mains marks");
    scanf("%d",&mains);
    if(mains>=90){
        printf("You have passed mains\n");
printf("enter interview marks");
scanf("%d",&interview);
if (interview>=95){
    printf("You have become an IAS");}
}
        else {
            printf("you have failed mains");
        }}

else{
    printf("you have failed prelims");
}
//getch;
        return 0;
    }



