#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],mul[5][5];
	int r,c,i,j,k;
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
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
					mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}		
		}
	}
	
	printf("\n Multiplication of matrix is : \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n\n");
	}
	
	getch();
	
}
