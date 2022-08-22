#include<stdio.h>
void main()
{
	char str[20];
	printf("\n Enter string : ");
	fgets(str,20,stdin);
	printf("\n string is : ");
	puts(str);
	getch();
}
