#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("myfile3.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	rewind(fp);
	printf("\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
