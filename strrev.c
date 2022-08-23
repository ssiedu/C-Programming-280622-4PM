#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	printf("\n Enter string : ");
	gets(str1);
	printf("\n string reverse is : %s",strrev(str1));
	getch();
}
