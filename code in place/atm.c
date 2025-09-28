#include<stdio.h>
int main()
{
	int balance=1000,option,withdrawal_amount,dep_amount;
	printf("This Programm Worker on the bases of A.T.M \n");
	printf("Enter  1 for Withdraw \n 2 for Deposit \n 3 For Check Balance \n For Exit");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		printf("You choose withdrawal \n Enter your ammount:");
		scanf("%d",&withdrawal_amount);
		printf("You have withdrawn %d this amount and the balance is %d",withdrawal_amount,balance-withdrawal_amount);
		break;
		case 2:
		printf("You choose deposit \n Enter your amount:");
		scanf("%d",&dep_amount);
		printf("You have depositted %d this amount now your balance is %d",dep_amount,balance+dep_amount);
		break;
		case 3:
		printf("You have chosen to check your balance");
		printf("Your balance is %d",balance);
		break;
		case 4:
		printf("Existing");
		break;
		default:
		printf("Invalid input");
	 } 
}
