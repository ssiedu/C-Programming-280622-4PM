#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int len;
	printf("\n Enter string : ");
	gets(str);
	len = strlen(str);
	printf("\n length of string is : %d",len);
	getch();
}
