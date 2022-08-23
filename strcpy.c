#include<stdio.h>
#include<string.h>
void main()
{
	char source[20],destination[20];
	printf("\n Enter source string : ");
	gets(source);
	strcpy(destination,source);
	printf("\n\n source string : %s",source);
	printf("\n\n destination string : %s",destination);
	getch();
}
