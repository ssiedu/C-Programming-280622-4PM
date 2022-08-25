#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("myfile2.txt","w");
	fputc('Z',fp);
	fclose(fp);
	getch();
}
