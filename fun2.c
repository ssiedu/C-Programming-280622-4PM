//function without argument and with return value
#include<stdio.h>
int add();  // function declaration
void main()
{
	int res;
	res= add();
	printf("\n sum is : %d",res);
	getch();
}
int add()
{
	int a,b,c;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	c= a+b;
	return c;
}
