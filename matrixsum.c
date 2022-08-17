#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],sum[5][5];
	int r,c,i,j;
	printf("\n Enter row size : ");
	scanf("%d",&r);
	printf("\n Enter column size : ");
	scanf("%d",&c);
	
	printf("\n Enter first matrix element : \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		
	printf("\n Enter Second matrix element : \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\n sum of matrix is : \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",sum[i][j]);
		}
		printf("\n\n");
	}
	
	
	
}
