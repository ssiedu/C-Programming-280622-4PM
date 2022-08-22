#include<stdio.h>
void main()
{
	char s[11] = "ssidigital";
	int i=0;
	int count=0;
	
	while(i<11)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
		{
			count++;//1	
		}
		i++;
	}
	printf("\n total number of vowel in string : %d",count);
	getch();
	
}
