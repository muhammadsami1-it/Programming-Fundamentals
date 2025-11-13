#include <stdio.h>

int cube(int x) {
    return x * x * x;
}

int main(void) 
{
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);
    result = cube(num);
    printf("The cube of %d is %d\n", num, result);
    return 0;
}
