#include <stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int i,j;
	for(i=1;i<=10;i++)
	{
//		j=n;
		for(j=num;j>=1;j--){
		
		printf("%d * %d= %d",j,i,j*i);
		printf("\n");
		}
	}
	return 0;
}
