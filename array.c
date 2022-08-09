#include<stdio.h>
void main()
{
	int a[10];
	int n,i;
	printf("\n Enter the size of array : ");
	scanf("%d",&n);
	
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n Array Element a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0] = a[i];
		}
	}
	printf("\n largest element is : %d",a[0]);
	getch();
	
	
	
	
	
	
}
