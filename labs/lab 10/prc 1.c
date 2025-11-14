#include<stdio.h>
int sum(int a,int b);
int main()
{
int x,y;
printf("enter a number:");
scanf("%d",&x);
printf("enter a number:");
scanf("%d",&y);
sum(x,y);
int result=sum( x,y);
printf("%d",result);
return 0;
}
int sum(int a,int b){
	return a+b;
}
