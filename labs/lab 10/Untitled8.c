#include<stdio.h>
void input(int*x,int*y);
int sum (int*x ,int*y ){
	input(x,y);
	return *x+*y;
}
	
int main(){

int res,num1,num2;
res=sum(&num1,&num2);
printf("%d",res);
}
void input(int*x,int*y){
	printf("Enter a number: ");
	scanf("%d",x);
	printf("Enter a number: ");
	scanf("%d",y);
}