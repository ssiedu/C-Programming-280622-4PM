#include<stdio.h>
void main()
{
	int a,b;
	int *ptr = NULL;
	if(ptr==NULL)
	{
		ptr = &a;
		a=10;
	}
	if(ptr == NULL)
	{
		ptr = &b;
		b=20;
	}
	printf("\n ptr value is : %d",*ptr);//20//10
	getch();
}
