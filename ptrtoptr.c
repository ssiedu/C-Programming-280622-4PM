#include<stdio.h>
void main()
{
	int num =45;
	int *ptr1 = &num;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	
	printf("\n ptr1 is : %u",ptr1);
	printf("\n ptr2 is : %u",ptr2);
	printf("\n ptr3 is : %u",ptr3);
	printf("\n ptr4 is : %u",ptr4);
	
	printf("\n ptr1 is : %d ",*ptr1);
	printf("\n ptr2 is : %d",**ptr2);
	printf("\n ptr3 is : %d",***ptr3);
	printf("\n ptr4 is : %d",****ptr4);
}
