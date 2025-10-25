#include<stdio.h>
int main (void)
{
	int a,b;
	printf("enter num 1:");
	scanf("%d",&a);
	printf("enter num 2:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("number 1 is %d number 2 is %d",a,b);
}
