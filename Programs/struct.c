#include <stdio.h>
#include <string.h>

struct Player
{
    char name[12];
    int score;
};


int main(){
   
/* struct = collection of related members ("variables")
            . they can be of different data types 
            . listed under one name in a block of memory 
            . VERY SIMILAR to classes in other languages (but no methods) */

 struct Player player1;
 struct Player player2;

 strcpy(player1.name, "bro");
 player1.score=4;

 strcpy(player2.name, "bre");
 player2.score=6;

 printf("%s\n" , player1.name);
  printf("%d\n" , player1.score);

 printf("%s\n" , player2.name);
   printf("%d\n" , player2.score);

   
    return 0;
}