#include<stdio.h>
void main()
{
	int n,i,a,r;
	printf("enter number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		a++;
		n=n/10;
	}
	printf("total%d\n",a);
	}
