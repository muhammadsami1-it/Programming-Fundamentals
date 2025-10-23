#include <stdio.h>
int main(void)
{
    int a, b, add, subtract, multi;
    float div, mod;

    printf("This program performs arithmetic operations.\n");

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    add = a + b;
    subtract = a - b;
    multi = a * b;
    div = (float)a / b; 
    mod = a % b;

    printf("Addition of two numbers is: %d\n", add);
    printf("Subtraction of two numbers is: %d\n", subtract);
    printf("Multiplication of two numbers is: %d\n", multi);
    printf("Division of two numbers is: %.2f\n", div);
    printf("Modulus of two numbers is: %.0f\n", mod);

    return 0;
}