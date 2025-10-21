#include <stdio.h>

int main(){
    int num,sum=0;
    printf("Enter a number :");
    scanf("%d",&num);
    do{
    	sum=sum+num%10;
    	num=num/10;
	}
	while(num!=0);
	printf("the sum of the digits is: %d",sum);
	return 0;
}
