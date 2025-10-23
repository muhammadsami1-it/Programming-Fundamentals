#include<stdio.h>
int main(void)
{
int age, hasid;
printf("Enter yor age");
scanf("%d",&age);
if(age>=18)
{
printf("Do you have id if yes then type 1: ");
scanf("%d",&hasid);
if(hasid==1)
{printf("\nYou are eligible");
}

}
else
printf("You are not eligible");
}
