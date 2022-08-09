#include<stdio.h>
void main()
{
	int a[50];
	int n,i;
	printf("\n Enter size of array : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n array element a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n array elements are : \n");
	for(i=0;i<n;i++)
	{
		printf("\n\n value of a[%d] : %d",i,a[i]);
	}
	getch();
	
}
