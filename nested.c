#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a and b :");
	scanf("%d%d",&a,&b);
	if(a!=b)
	{
		printf("\n a is not equal too b");
		if(a>b)
		{
			printf("\n a is greater than b");
		}
		else
		{
			printf("\n b is greater than a");
		}
	}
	else
	printf("\n a is equal to b");
	getch();
}
