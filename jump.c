#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			goto ABC;//continue;//break;
		}
		
		printf("\n%d",i);//1234//12345
	}
	ABC : printf("\n we used goto");
	getch();
}
