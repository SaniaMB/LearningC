#include <stdio.h>

int main(){
    int a[20][20],b[20][20],c[20][20],d[20][20],m,n,p,q,i,j,k;

printf("Enter no.of rows and columns for matrix A:\n");
scanf("%d %d",&m,&n);
printf("Enter %d elements for matrix A:\n",m*n);

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}


printf("Enter no.of rows and columns for matrix B:\n");
scanf("%d %d",&p,&q);
printf("Enter %d elements for matrix B:\n",p*q);

for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        scanf("%d",&b[i][j]);
    }
}

if(n==p){
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
           c[i][j]=0;
           for(k=0;k<p;k++){
            c[i][j]=c[i][j]+a[i][k]*b[j][k];

           }
        }

    }
}
else{
printf("MATRIX MULTIPLICATION IS NOT POSSIBLE");
exit(0);
}

printf("Matrix C elements are :\n");
for(i=0;i<m;i++){
    for(j=0;j<q;j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
return 0;
}