#include<stdio.h>
#include <stdlib.h>

int main() {
int a[10][10], b[10][10], c[10][10], m, n, p, q, i, j, k;

printf("Enter the no of rows and columns for A matrix:\n ");
scanf("%d%d", &m,&n);
printf("Enter the no of rows and columns for B matrix:\n ");
scanf("%d%d", &p,&q);
if(n!=p) {
printf("MATRIX MULTIPLICATION IS NOT POSSIBLE\n");
exit(0);
}

printf("Enter the elements of Matrix-A: \n");
for (i = 0; i < m; i++) {
for (j = 0; j < n; j++) {
scanf("%d", & a[i][j]);
}
}

printf("Enter the elements of Matrix-B: \n");
for (i = 0; i < p; i++) {
for (j = 0; j < q; j++) {
scanf("%d", & b[i][j]);
}
}

if (n==p){
for (i = 0; i < m; i++) {
for (j = 0; j < q; j++) {
c[i][j] = 0;
for (k = 0; k < p; k++) {
c[i][j] = c[i][j] +a[i][k] * b[k][j];
}
}
}
}
printf("The product of the two matrices is: \n");
for (i = 0; i < m; i++) {
for (j = 0; j < q; j++) {
printf("%d\t", c[i][j]);
}
printf("\n");
}
return 0;
}