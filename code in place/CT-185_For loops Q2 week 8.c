#include <stdio.h>

int main(){
    int num;
    printf("Enter a number to find its Factorial :");
    scanf("%d",&num);
    int i , fac = 1;

	for(i=1;i<=num;i++)
	{
        fac = fac * i;     
    }
    printf("%d",fac);
    return 0;
}
