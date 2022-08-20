#include<stdio.h>
void exchange(int *x , int *y); // function declaration
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	exchange(&a,&b);
	getch();
}
void exchange(int *x, int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	printf("\n value of x : %d",*x);
	printf("\n value of y : %d",*y);
}
