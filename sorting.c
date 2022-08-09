#include<stdio.h>
void main()
{
	int a[10];
	int n,i,j,temp;
	printf("\n Enter the size of array : ");
	scanf("%d",&n);
	
	printf("\n Enter array elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("\n Sorted array : \n");
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	getch();
	
	
	
	
}
