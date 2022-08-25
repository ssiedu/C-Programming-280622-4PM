#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float sal;
};
void main()
{
	struct employee e1;
	
	printf("\n Enter employee id : ");
	scanf("%d",&e1.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e1.name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&e1.sal);
	
	
	printf("\n\n");
	
	printf("\n Employee id : %d",e1.id);
	printf("\n Employee Name : %s",e1.name);
	printf("\n Employee salary : %.2f",e1.sal);
	
	getch();
}
