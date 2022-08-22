#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,*ptr,i;
	printf("\n Enter Array size : ");
	scanf("%d",&n1);
	ptr = (int*)malloc(n1*sizeof(int));
	printf("\n previously allocate memory : \n\n");
	for(i=0;i<n1;i++)
	{
		printf("\n %x",(ptr+i));
	}
	printf("\n Enter new size of array : \n\n");
	scanf("%d",&n2);
	ptr = realloc(ptr,n2*sizeof(int));
	printf("\n newly allocation of memory : \n\n");
	for(i=0;i<n2;i++)
	{
		printf("\n %x",(ptr+i));
	}
	free(ptr);
	getch();
}
