#include <stdio.h>
int main(void)
{
	float disupto,amount,disamount;
	printf("Enter the amount:");
	scanf("%f",&amount);
	if(amount<0){
	printf("Invalid");
	}
	if(amount>=2000){
		disupto=amount*0.20;
	}
	else if(amount>2000 && amount<=4000){
		disupto=amount*0.30;
	}
	else if(amount>4000 && amount<=6000){
		disupto=amount*0.50;
	}
	else{
		disupto=0;
	}
	disamount=amount-disupto;
	printf("\nthis was tha actual amount:%.2f",amount);
	printf("\nthis is the discount:%.3f",disupto);
	printf("\nthis is the amount after discount:%.2f",disamount);
    return 0;
}