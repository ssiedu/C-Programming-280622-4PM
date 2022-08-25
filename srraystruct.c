#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float sal;
}e1[3];
void main()
{
	//struct employee e1[3];
	int i;
	printf("\n Enter Employee Information : \n\n");
	for(i=1;i<=3;i++)
	{
	printf("\n Enter employee id : ");
	scanf("%d",&e1[i].id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e1[i].name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&e1[i].sal);
	}
	
	printf("\n\n");
	printf("\n Employee Information Details : \n\n");
	for(i=1;i<=3;i++)
	{
	
	printf("\n Employee id : %d",e1[i].id);
	printf("\n Employee Name : %s",e1[i].name);
	printf("\n Employee salary : %.2f",e1[i].sal);
	}
	getch();
}
