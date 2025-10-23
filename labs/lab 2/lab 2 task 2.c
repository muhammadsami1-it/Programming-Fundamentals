#include<stdio.h>
int main(void)
{
	printf("This program checks if a number is positive negative or zero");
	int a;
	printf("\nEnter a number:");
	scanf("%d",&a);
	(a>0)?printf("Number is Positive %d",a):(a<0)?printf("Number is Negative %d",a):printf("Number is zero");
}