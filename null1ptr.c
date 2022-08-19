#include<stdio.h>
void main()
{
	int a;
	float b;
	char c;
	int *iptr = NULL;
	float *fptr = NULL;
	char *cptr = NULL;
	
	iptr = &a;
	a=10;
	printf("\n value of a : %d",a);
	printf("\n value of iptr : %d",*iptr);
	
	fptr = &b;
	b= 12.33;
	printf("\n value of b : %.2f",b);
	printf("\n value of fptr :%.2f",*fptr);
	
	cptr = &c;
	c= 'A';
	printf("\n value of c : %c",c);
	printf("\n value of cptr : %c",*cptr);
	
	getch();
	
	
	
	
}
