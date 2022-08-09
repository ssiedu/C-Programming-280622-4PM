#include<stdio.h>
int fact(int n);
void main()
{
	int num,res;
	printf("\n Enter number : ");
	scanf("%d",&num);
	res = fact(num);//120
	printf("\n factorial is : %d",res);
	getch();
}
int fact(int n)//5//4//3//2//1//0
{
	if(n==0)//5==0//4==0//3==0//2==0//1==0//0==0
	return 1;
	else
	return n*fact(n-1);//5*fact(4)//5*4*fact(3)//5*4*3*fact(2)//5*4*3*2*fact(1)//5*4*3*2*1*fact(0)
}
