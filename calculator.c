#include<stdio.h>
void main()
{
	int num1,num2,ch,res;
	printf("\n Enter number1 : ");
	scanf("%d",&num1);
	printf("\n Enter number2 : ");
	scanf("%d",&num2);
	printf("\n 1.Addition\n 2.Subtraction\n 3. Multiplication\n 4. Division \n");
	printf("\n Enter your choice ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: res=num1+num2;
				printf("\n Addition is :%d",res);
				break;
		case 2: res=num1-num2;
				printf("\n subtraction is : %d",res);
				break;
		case 3: res = num1*num2;
				printf("\n Mul is : %d",res);
				break;
		case 4: res=num1/num2;
				printf("\n Division is : %d",res);
				break;
		default : printf("\n Invalid choice");
				  break;
	}
	getch();
	
}
