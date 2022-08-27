#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("myfile3.txt","w");
	fputs("welcome to ssi digital,Indore",fp);
	fclose(fp);
	getch();
}
