#include <stdio.h>

int main(void)
{
    int i, j,space;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
        	for(space=1;space<=5;space++){
        		printf(" ");
			}
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
