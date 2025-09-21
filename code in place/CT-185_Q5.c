#include<stdio.h>
int main (void)
{
	//declare variable
	float celsius;
	//take celsius input
	printf("Enter the temperature in Celsius:");
	scanf("%f",&celsius);
	float fahrenheit = (celsius*9/5)+32;
	if(celsius>=30)
	{
		printf("\nIts hot!Stay hydrated and wear light clothes %.1f=%.2f",celsius,fahrenheit);
	}
	else if(celsius>=20)
	{
		printf("Nice weather! Perfect for outdoor activities %.1f=%.2f",celsius,fahrenheit);
	}
	else if(celsius>=10)
	{
		printf("Col weather. Wear a light jacket %.1f=%.2f",celsius,fahrenheit);
	}
	else if(celsius>=0)
	{
		printf("Cold! Wear warm clothes %.1f=%.2f",celsius,fahrenheit);
	}
	else
	{
		printf("Frezing! Stay indoors and bundle up %.1f=%.2f",celsius,fahrenheit);
	}
}
