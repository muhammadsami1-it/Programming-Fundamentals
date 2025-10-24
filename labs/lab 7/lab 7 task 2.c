#include<stdio.h>
int main(void)
{
     int number[5];
     for(int i=0;i<5;i++)
     {
         printf("Enter number");
         scanf("%d",&number[i]);
     }
     printf("You enter");
     for(int i=0;i<5;i++){
         printf("%d",number[i]);
     }
    
	return 0;
}