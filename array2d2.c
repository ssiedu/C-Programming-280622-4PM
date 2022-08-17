#include<stdio.h>
void main()
{
	int arr[10][10];
	int r,c,i,j;
	printf("\n Enter the row size : ");
	scanf("%d",&r);
	printf("\n Enter column size : ");
	scanf("%d",&c);
	printf("\n Enter array Elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n matrix is : \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n\n");
	}
}
