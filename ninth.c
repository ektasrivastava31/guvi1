#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k,i,a[20],sum=0;
	printf("enter size of array\n");
	scanf("%d",&n);
	
	printf("enter array element");
	for(i=0;i<=n;i++)
	
		scanf("%d",&a[i]);
	
	printf("enter k\n");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	getch();
}
