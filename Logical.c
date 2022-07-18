#include<stdio.h>
void main()
{
	int a=10, b=4;
	
	printf("\n Logical AND : %d ", ((a>b)&&(a>=b)));//1
	printf("\n Logical AND : %d ", ((a<b)&&(a>=b)));//0
	printf("\n Logical AND : %d ", ((a>b)&&(a==b)));//0
	
	printf("\n Logical OR : %d ", ((a>b)||(a>=b)));//1
	printf("\n Logical OR : %d ", ((a<b)||(a>=b)));//1
	printf("\n Logical OR : %d ", ((a>b)||(a==b)));//1
	
	printf("\n Logical OR : %d ", (!(a>b)||(a>=b)));//1
	printf("\n Logical OR : %d ", !((a>b)||(a>=b)));//0
	printf("\n Logical OR : %d ", ((a>b)&&(!(a>=b))));//0
	
	
}
