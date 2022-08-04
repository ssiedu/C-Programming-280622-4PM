#include<stdio.h>
void main()
{
	int ch;
	printf("\n Enter your choice in between(1-5): ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("One");
				break;
		case 2: printf("Two");
				break;
		case 3: printf("Three");
				break;
		case 4: printf("Four");
				break;
		case 5: printf("Five");
				break;
		default: printf("\n Invalid choice");
				break;
	}
	getch();
}
