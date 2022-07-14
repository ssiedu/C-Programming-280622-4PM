#include<stdio.h>
//float si;
void main()
{
	float p,r,t;
	float si;
	/*printf("\n Enter amount \n rate_of_interest \n time : ");
	scanf("%f%f%f",&p,&r,&t);*/
	printf("\n Enter principal amount : ");
	scanf("%f",&p);
	printf("\n Enter rate of interest : ");
	scanf("%f",&r);
	printf("\n Enter time period : ");
	scanf("%f",&t);
	si = (p*r*t)/100;
	printf("\n simple interest : %.2f",si);
	getch();
}
