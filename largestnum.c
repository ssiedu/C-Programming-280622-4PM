#include<stdio.h>
void main()
{
	int a,b,c,res;
	printf("\n Enter the value of a: ");
	scanf("%d",&a);
	printf("\n Enter the value of b: ");
	scanf("%d",&b);
	printf("\n Enter the value of c: ");
	scanf("%d",&c);
	
	res =  (a>b && a>c)? a : (b>c) ? b : c;
	//a>b ? (a>c ? a : b) : (b>c ? b : c);(right)
	//(a>b) ? (a>c ? a : c) : (b>c ? b : c); (right)
	//(a>b) ? ((a>c) ?a : c) : ((b>c) ? b : c) ;(right)
	//(a>b ) && (b>c) ? (c>a) : c;
	//(a>b) ? a : b>(b>c) ? b : c >(a>c) ? a : c;
	//(a<b) ? (b<c) ? b : c : (c<a) ? c : a;
	
	printf("\n Largest number is : %d",res);
	getch();
	 
}
