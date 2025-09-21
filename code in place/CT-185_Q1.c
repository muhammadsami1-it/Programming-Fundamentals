#include<stdio.h>
int main(void)
{
	//take two variable in float dat type
	float celsius,fahrenheit;
	printf("Enter temperature in Celsius :");
	scanf("%f",&celsius);
	//take temperature in celsius
	fahrenheit=(celsius*(9/5)+32);
	//print temperature in fahrenheit
	printf("/nThe temperature in Fahrenheit is :%.2f ",fahrenheit);
	//100 celsius is 132 fahrenheit
	//0 celsius is 32 fahrenheit
	//-40 celsius is -8 fahrenheir
}
