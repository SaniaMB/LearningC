#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
   const int min=1;
   const int max=100;
   int guesses=0;
   int guess;
   int answer;


   srand(time(0));

   answer= (rand()%max) + min;

   //printf("%d\n",answer);
   
   printf("Enter your guess:\n");

   do{
     scanf("%d",&guess);

     if(guess<answer){
        printf("Too low!\n");
     }

     else if(guess>answer){
        printf("Too high!\n");
     }

     else{
        printf("CORRECT!\n");
     }
     
     guesses++ ;
     
   }while(guess!=answer);


printf("******************\n");
printf("Answer:%d\n",answer);
printf("guesses:%d\n",guesses);
if(guesses==1){
   printf("Got in first guess,INCREDIBLE!");
}

return 0;
}