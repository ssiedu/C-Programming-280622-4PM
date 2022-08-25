#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp = fopen("myfile2.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
