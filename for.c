#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter limit : ");
	scanf("%d",&n);
	printf("\n Enter start limit : ");
	scanf("%d",&s);
	printf("\n Natural numbers : ");
	for(i=s;i<=n;i=i+1)
	{
		
		printf("\t%d",i);
	}
	getch();
}
