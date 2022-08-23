#include<stdio.h>
void main()
{
	int num,rev=0,sum=0,tod=0;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	while(num != 0)
	{
		rev = rev*10 + (num%10);
		sum = sum+(num%10); 
		tod = tod+1;
		num = num/10;
	}
	printf("\n Reverse number is : %d",rev);
	printf("\n sum of digita is : %d",sum);
	printf("\n total no of digit : %d",tod);
	getch();
}
