#include<stdio.h>
void main()
{
	int a[5] = {1,2,3,4,5};
	int *ptr = &a;
	int i;
	 printf("\n Array Elements are : \n\n");
	 
	 for(i=0;i<5;i++)
	 {
	 	printf("\t%d",*(ptr+i));
	 }
	 getch();
}
