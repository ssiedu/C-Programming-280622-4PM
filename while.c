#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter End limit : ");
	scanf("%d",&n);
	printf("\n Enter start limit : ");
	scanf("%d",&s);
	i=s;
	printf("\n Numbers are :\n ");
	while(i<=n)
	{
		printf("\t%d",i);
		i=i+2;
	}
	getch();
}
