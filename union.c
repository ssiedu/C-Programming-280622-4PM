#include<stdio.h>
#include<string.h>
union Data
{
	int i;
	char name[10];
	float f;
}d;

void main()
{
	d.i = 101;
	printf("\n integer value : %d",d.i);
	strcpy(d.name,"Ram");
	printf("\n name of union : %s",d.name);
	d.f=12.3;
	printf("\n float value : %.2f",d.f);
	getch();
}
