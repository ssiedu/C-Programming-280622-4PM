#include<stdio.h>
void main()
{
	int num1, num2;
	printf("\n Enter the value of num1 :");
	scanf("%d",&num1);
	printf("\n Enter the value of num2 : ");
	scanf("%d",&num2);
	if(num1>num2)
	printf("\n num1 is greater than num2");
	else
	printf("\n num2 is greater than num1");
	getch();
}
