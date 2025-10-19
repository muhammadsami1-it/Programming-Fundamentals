#include <stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
	int i,j;
	for(i=1;i<=num;i++)
	{
        for(j=1;j<=i;j++){
			printf("*");     
		}
		printf("\n");
    }
    return 0;
}
