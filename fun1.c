//function without argument and without return value
#include<stdio.h>
void add();  // function declaration
void main()
{
	add();	// Function call
	getch();
}
void add()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Sum of two numbers : %d",a+b);
}
