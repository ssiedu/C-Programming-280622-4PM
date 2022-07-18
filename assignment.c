#include<stdio.h>
void main()
{
	int a=10;
	a+=10;   //   a=a+10  = 20
	
	printf("\n value of a : %d",a);
	
	a-=5;  // a=a-5;    
	printf("\n value of a : %d",a);//15
	a*=2;
	printf("\n value of a : %d",a);//30
	getch();
}
