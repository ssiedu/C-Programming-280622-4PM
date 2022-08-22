#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,*ptr,i,sum=0;
	printf("\n Enter number of elements in Array : ");
	scanf("%d",&n);
	ptr = (int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("\n Sorry! not sufficient Memory");
		exit(0);
	}
	printf("\n Enter Array Elements : \n\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum += *(ptr+i);//sum = sum + *(ptr+i)
	}
	printf("\n sum of array elements : %d",sum);
	free(ptr);
	getch();
}
