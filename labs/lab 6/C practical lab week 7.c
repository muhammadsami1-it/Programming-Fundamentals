#include <stdio.h>

int main(void)
{
    double sum = 1.0;
    int d = 4;

    while (d <= 400)
    {
        sum = sum + (1.0 / d);
        d = d + 4;
    }

    printf("Sum = %lf\n", sum);

    return 0;
}
