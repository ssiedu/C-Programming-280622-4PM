#include<stdio.h>
void main()
{
	int i=10;
	float f = 12.3;
	char c = 'Z';
	void *ptr;
	
	ptr = &i;
	printf("\n value of i : %d",i);
	printf("\n value of ptr : %d", *(int*)ptr);
	
	ptr = &f;
	printf("\n value of f : %.2f",f);
	printf("\n value of ptr : %.2f",*(float*)ptr);
	
	ptr = &c;
	printf("\n value of c : %c",c);
	printf("\n value of ptr : %c",*(char*)ptr);
	
	getch();
}
