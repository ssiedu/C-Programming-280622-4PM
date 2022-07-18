#include<stdio.h>
#define pi 3.14
void main()
{
	float r,area;
	printf("\n Enter radius : ");
	scanf("%f",&r);
	area = pi*r*r;
	printf("\n area of circle is : %.2f",area);
	getch();
}
