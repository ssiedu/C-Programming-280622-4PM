//function with argument and with return value
#include<stdio.h>
int add(int a, int b);
void main()
{
	int a,b,res; // actual argument
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	res=add(a,b);
	printf("\n sum is : %d",res);
	getch();
}
int add(int a, int b)
{
	return a+b;
}
