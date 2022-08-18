#include<stdio.h>
void main()
{
	int a,b;
	int *ptr1,*ptr2;
	ptr1 = &a;
	ptr2 = &b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n sum is : %d",*ptr1+*ptr2);
	getch();
}
