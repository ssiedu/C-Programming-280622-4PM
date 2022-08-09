#include<stdio.h>
int fact(int n);
void main()
{
	int num,res;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	res= fact(num);
	printf("\n factorial of a number is : %d",res);
	getch();
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
