#include <stdio.h>
//#include <conio.h>                                         
//void main()
int main(){
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    //clrscr
    
    for(int i=0;i<10;i++)
    {
        printf("%d\n",*(a+i));
    }

    for(int i=0;i<10;i++)
    {
        printf("%d\n",(a+i));
    }
    
    
    
    
    
    //getch
    return 0;
}