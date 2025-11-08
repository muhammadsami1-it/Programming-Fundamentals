#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,b,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	float sq_rt,x,y;
	sq_rt=sqrt(b*b-4*a*c);
	x=(-b+sq_rt)/2*a;
	y=(-b-sq_rt)/2*a;
	printf("the roots are %.2f %.2f",x,y);
}