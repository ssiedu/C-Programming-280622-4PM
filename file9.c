#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("myfile4.txt","w+");
	fputs("This is c/c++ classes",fp);
	fseek(fp,8,SEEK_SET);
	fputs("programming classes",fp);
	fclose(fp);
	getch();
}
