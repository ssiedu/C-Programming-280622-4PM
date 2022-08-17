#include<stdio.h>
void main()
{
	int a[2][2]= {{10,11},{12,13}};
	int i,j;
	printf("\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
}
