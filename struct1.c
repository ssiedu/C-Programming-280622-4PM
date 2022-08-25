#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[20];
	float sal;
}e1,e2;
void main()
{
	//struct employee e1,e2;
	
	e1.id = 101;
	strcpy(e1.name,"Ram");
	e1.sal = 45000.64;
	
	e2.id = 102;
	strcpy(e2.name,"Sita");
	e2.sal = 45000.64;
	
	
	printf("\n employee id : %d",e1.id);
	printf("\n employee Name : %s",e1.name);
	printf("\n employee salary : %.2f",e1.sal);
	
	printf("\n employee id : %d",e2.id);
	printf("\n employee Name : %s",e2.name);
	printf("\n employee salary : %.2f",e2.sal);
	
	getch();
}
