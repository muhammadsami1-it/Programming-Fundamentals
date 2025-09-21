#include<stdio.h>
int main (void)
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	if((year%400==0)||(year%4==0)&&(year%100!=0))
	{
		printf("this is a leap year");
		
	}
	else
	{
		printf("this is not a leap year");
	}
}
