#include<stdio.h>
int main(void)
{
	int num,rest;
	printf("Enter a number:");
	scanf("%d",&num);
	    while(num>=10|| num<=-10){
    	int digit=num%10;
    	digit=2*digit;
    	rest=num/10;
    	num=rest-digit;
		}
		if (num == 0 || num == 7 || num == -7)
        printf("The number is divisible by 7.\n");
    else
        printf("The number is not divisible by 7.\n");
	return 0;
}