#include<stdio.h>
void main()
{
	int num=10;
	int *ptr = &num;
	printf("\n address of ptr  : %u",ptr);
	ptr = ptr+3;
	printf("\n value of num: %d",num);
	printf("\n address of ptr  : %u",ptr);
	getch();
}
