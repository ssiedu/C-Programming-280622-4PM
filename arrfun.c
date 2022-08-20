#include<stdio.h>
void getarray (int a[]);
void main()
{
	int arr[5] = {10,20,30,40,50};
	getarray(arr);
	getch();
}
void getarray(int a[5])
{
	int i;
	printf("\n Array Elements are : \n");
	for(i=0;i<5;i++)
	{
		printf("\t %d",a[i]);
	}
}

