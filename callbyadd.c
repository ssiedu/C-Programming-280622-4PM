//call by address
#include<stdio.h>
void swap(int *a,int *b);
void main()
{
	int x, y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("\n Before swap : \n");
	printf("\n x is : %d",x);
	printf("\n y is : %d",y);
	swap(&x,&y);
	printf("\n After swap : \n");
	printf("\n x is : %d",x);
	printf("\n y is : %d",y);
	getch();
}
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
	
	printf("\n value of a : %d",*a);
	printf("\n value of b : %d",*b);
	
}
