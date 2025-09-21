#include<stdio.h>
int main (void)
{
	//checks if input number is even or odd
	int num,num2;
	printf("Enter an number :");
	scanf("%d",&num);
	num2=num%2;
	if(num2==0){
		printf("Number is Even");
	}
	else{
		printf("Number is Odd");
	}
}
