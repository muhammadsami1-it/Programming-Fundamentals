#include <stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int i=1;
	while(i<=10)
	{
		int j=num;
		while(j>=1){
		
		printf("%d * %d= %d",j,i,j*i);
		printf("\n");
		j--;
	
		}
		i++;
	}
	return 0;
}
