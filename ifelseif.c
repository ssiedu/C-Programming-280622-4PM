#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	if(a>b)
	printf("\n a:%d is greater than b:%d",a,b);
	else if(a==b)
	printf("\n a:%d is equal too b:%d",a,b);
	else
	printf("\n b:%d is greater than a:%d",b,a);
	getch();
}
