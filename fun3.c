//function with arugument and without return value
#include<stdio.h>
void add(int a, int b);
void main()
{
	int a,b; // actual argument
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	add(a,b);
	getch();
}
void add(int a, int b)// formal argument
{
	printf("\n Sum is : %d",a+b);
}
