#include<stdio.h>
union Data
{
	int i;
	char name[10];
	float f;
}d;

void main()
{
	printf("\n size of union %d bytes : ",sizeof(d));
	getch();
}
