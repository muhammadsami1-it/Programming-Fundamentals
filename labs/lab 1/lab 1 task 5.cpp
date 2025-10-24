#include<stdio.h>
int main (void)
{
	int tax_rate,salary,tax,rem_salary;
	printf("Enter Tax Rate:");
	scanf("%d",&tax_rate);
	printf("Enter Salary:");
	scanf("%d",&salary);
	tax=salary*tax_rate;
	rem_salary=salary-tax;
	printf("The remaining salary is :%d",rem_salary);
	return 0;
}