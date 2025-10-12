#include <stdio.h>

int main(void)
{
    int i, j,space;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= 5; j++)
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
