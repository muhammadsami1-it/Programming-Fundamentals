#include<stdio.h>
int main()
{
	printf("This program coverts electrical energy from watts to kilowatts");
	float watts;
	printf("\nEnter Electrical energy in watts:  ");
	scanf("%f",&watts);
	float kilowatt;
	kilowatt= watts/1000;
	printf("The Energy in kilowatt is .3%f",kilowatt);
	
	
}
