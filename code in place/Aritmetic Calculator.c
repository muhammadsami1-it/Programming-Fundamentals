#include<stdio.h>
int main (void)
{
	int num1,num2;
	int ope;
	printf("This is an Arithmetic Calculator");
	printf("\nEnter number 1:");
	scanf("%d",&num1);
	printf("\nEnter number 2:");
	scanf("%d",&num2);
	printf("\nEnter operation in following manner \n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n");
	scanf("%d",&ope);
	switch(ope){
		case 1:
			printf("The Addition of two number is %d",num1+num2);
			break;
		case 2:
			printf("The subtraction of two number is %d",num1-num2);
			break;
		case 3:
			printf("The Multiplication of two number is %d",num1*num2);
			break;
		case 4:
			if(num2!=0)
			{
				float div=(float)num1/num2;
				printf("The Division of two number is %.2f",div);
			}
			else
			printf("Invalid Second Number ");
			break;
		default:
			printf("Invalid Operation Input");
	}
	return 0;
	}
