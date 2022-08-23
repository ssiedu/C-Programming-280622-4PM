#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10];
	printf("\n Enter first string : ");
	gets(str1);
	printf("\n Enter second string : ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	printf("\n strings are equal");
	else
	printf("\n string are not equal");
	getch();
}
