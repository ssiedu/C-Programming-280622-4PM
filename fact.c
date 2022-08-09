#include<stdio.h>
void main()
{
	int num,fact=1,i;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact= fact*i;
	}
	printf("factrorial is : %d",fact);
	getch();
}
