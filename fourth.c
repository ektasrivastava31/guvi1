#include<stdio.h>
void main()
{
	char n;
	printf("enter the character \n");
	scanf("%s",&n);
	if(n>='a' && n<='z' || n>='A' && n<='Z')
	{
		printf("Alphabet");
	}
	else
	printf("No");
}
