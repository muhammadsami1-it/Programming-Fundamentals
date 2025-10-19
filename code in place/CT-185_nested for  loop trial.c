#include <stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=num;j>=1;j++){
		
		printf("%d * %d= %d",num,i,num*i);
		printf("\n");
		j--;}
	}
	return 0;
}


