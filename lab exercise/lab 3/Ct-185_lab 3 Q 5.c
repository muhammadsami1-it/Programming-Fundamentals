#include <stdio.h>

int main(void)
{
    float principal, rate, time, interest;
	printf("Principle should be between 100-1000000 Rs. the rate of interest shoulde be 5%-10% and Time period should be 1-10 year");
    printf("\nEnter Principal amount (100 - 1000000): ");
    scanf("%f", &principal);
    printf("\nEnter Rate of Interest (5 - 10): ");
    scanf("%f", &rate);
    printf("\nEnter Time in years (1 - 10): ");
    scanf("%f", &time);
    interest = (principal * rate * time) / 100;
    printf("Interest = %.2f\n", interest);

    return 0;
}