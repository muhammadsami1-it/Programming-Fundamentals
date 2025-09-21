#include<stdio.h>
int main (void)
{
	int units;
	printf("enter units:");
	scanf("%d",&units);
	if(units<=100)
	{
		printf("the bill is : %d",units*5);
	}
	int a,b;
	a=units-100;
	if(units>100)
	{
		if(a<=100)
		{
			printf("the bill is : %d",100*5+a*7);
		}
	}
	b=units-200;
	if(units>100)
	{
		if(a>100)
		{
			printf("the bill is : %d",100*5+100*7+b*10);
		}
	}
}

