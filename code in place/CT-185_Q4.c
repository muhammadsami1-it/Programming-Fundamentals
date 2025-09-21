#include<stdio.h>
int main (void)
{
	//division safety checker
	float num1,num2;
	//takes 1 num input
	printf("Enter First number:");
	scanf("%f",&num1);
	//takes 2 num input
	printf("Enter second number:");
	scanf("%f",&num2);
	if(num2==0)
	{
		printf("Enter another number:");
		scanf("%f",&num2);
	}
	else{
		printf("The division is:%.2f",num1/num2);
	}
}
