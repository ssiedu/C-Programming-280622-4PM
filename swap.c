#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	a= a+b;// a=30
	b= a-b;// b=10
	a= a-b;// a=20
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	getch();
}
