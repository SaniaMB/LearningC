#include <stdio.h>
//#include <conio.h>                                         
//void main()
int main(){
    
  int i,j,m,n;
    //clrscr
    printf("Enter the straing table number and ending");
    scanf("%d%d",&m,&n);
    printf("tables from %d - %d\n",m,n);
    for(j=m;j<=n;j++){
        for (i=1;i<=10;i++){
        printf("%d*%d=%d\n",j,i,j*i);
    }
    printf("\n");
    }
    //getch
    return 0;
}