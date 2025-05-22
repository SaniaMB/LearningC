# include <stdio.h>
void reverse(char *);
int main()
{
char a[100] ;

printf("Enter a string:");
fgets(a,sizeof(a),stdin);
printf("Reversed string:");
reverse(a);

return 0;
}

void reverse(char *str)
{
if (*str)
{
	reverse(str+1);
	printf("%c", *str);
}

}

