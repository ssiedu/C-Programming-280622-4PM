#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("myfile1.txt","w");
	fprintf(fp,"Welcome to ssi digital!");
	fclose(fp);
	getch();
}
