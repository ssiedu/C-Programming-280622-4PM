#include<stdio.h>
void main()
{
	float principal_amount,rate,time;
	float SI,total_amount;
	float *p = &principal_amount;
	float *r = &rate;
	float *t = &time;
	
	printf("\n Enter principal amount : ");
	scanf("%f",&principal_amount);
	printf("\n Enter rate of interest : ");
	scanf("%f",&rate);
	printf("\n Enter time in year : ");
	scanf("%f",&time);
	
	SI = (*p * *r * *t)/100;
	printf("\n Simple interest is : %.2f",SI);
	total_amount = *p + SI;
	printf("\n total amount : %.2f",total_amount);
	getch();
	
	
	
}
