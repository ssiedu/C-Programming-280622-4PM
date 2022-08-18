#include<stdio.h>
void main()
{
	int num;
	int *ptr;
	printf("\n Enter the value of num : ");
	scanf("%d",&num);
	ptr = &num;
	printf("\n the value of num is : %d",num);
	//printf("\n\n address of num is : %u",&num);
	printf("\n ptr hold address is : %u",ptr);
	printf("\n  value of variable :  %d", *ptr);
	
}
