#include<stdio.h>
void main()
{
	int num=10;
	int num1=20;
	int *ptr = &num;
	int *ptr1 = &num1;
	printf("\n address of ptr  : %u",ptr);
	ptr = ptr-ptr1;
	printf("\n value of num: %d",num);
	printf("\n address of ptr  : %u",ptr);
	printf("\n address of ptr1  : %u",ptr1);
	getch();
}
