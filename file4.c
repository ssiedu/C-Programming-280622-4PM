#include<stdio.h>
void main()
{
	FILE *fp;
	int id;
	char name[20];
	float sal;
	fp=fopen("emp.txt","a");
	if(fp==NULL)
	{
		printf("\n file does not exist");
		return;
	}
	printf("\n Enter Employee id : ");
	scanf("%d",&id);
	fprintf(fp,"Id : %d\n",id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&name);
	fprintf(fp,"Name : %s\n",name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&sal);
	fprintf(fp,"salary : %.2f\n",sal);
	fclose(fp);
	getch();
}
