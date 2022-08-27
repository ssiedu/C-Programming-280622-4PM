#include<stdio.h>
void main()
{
	FILE *fp;
	char text[30];
	fp = fopen("myfile3.txt","r");
	printf("%s",fgets(text,30,fp));
	fclose(fp);
	getch();
}
