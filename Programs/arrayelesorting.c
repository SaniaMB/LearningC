#include <stdio.h>

void sort(int array[] , int size)   //int - char
{
   for(int i=0; i<size-1; i++)
{
    for(int j=0; j<size-1; j++)
  {
    if(array[j] > array[j+1])
    {
      int temp=array[j];
      array[j]=array[j+1];
      array[j+1] = temp;
    }
   }
 }
}

void printarray(int array[], int size)  // int - char
{
   for(int i=0; i<size ; i++)
   {
      printf("%d",array[i]);  // %d - %c
   }


}
int main(){
   
int array[] = {9, 1 , 3, 4, 5, 6, 7, 8,2};
//char array[] = {'f' ,'d' , 'b','c','a'};
int size = sizeof(array)/sizeof(array[0]);

sort(array , size);
printarray(array , size);
   
    return 0;
}