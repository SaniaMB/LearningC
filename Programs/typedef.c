#include <stdio.h>

typedef struct{
    char name[25];
    char password[12];
    int id ;
}user;

int main(){

//typedef = reserved keyword that gives an existing datatype a "nickname" .

user user1 = {"Bro","password123",123456789};
user user2 = {"Bruh","password321",987654321};

printf("%s\n",user1.name);
printf("%s\n",user1.password);
printf("%d\n",user1.id);

printf("\n");

printf("%s\n",user2.name);
printf("%s\n",user2.password);
printf("%d\n",user2.id);

    return 0;
}