#include<stdio.h>
void main()
{
	int y=4;//5 //6
	//int x = y++;//++y;
	
	//int z = y--;//--y; // x=3  y=3
	
	int z = ++y + ++y;  // 10 y=10 // 12 y=6 
	printf("\n value of z : %d \n value of y : %d",z,y);//4//3
	getch();
}
