#include<stdio.h>
int main(void)
{
	char a;
	printf("Enter type of Coffee as 'B' for Black and 'W' for White Coffee ");
	printf("\nEnter Coffee type:");
	scanf("%c",&a);
	switch(a){
		case 'B':
		case 'b':
		{
				printf("\nOperations	      Black Coffee");
				printf("\nPut Water				20 Mins");
				printf("\nSugar					20 Mins");
				printf("\nMix Well				25 Mins");
				printf("\nAdd Coffee	     	15 Mins");
				printf("\nAdd Milk				    -  ");
				printf("\nMix Well				25 Mins");
				break;
		}
		case 'W':
		case 'w':
		{
				printf("\nOperations	   White Coffee");
				printf("\nPut Water				15 Mins");
				printf("\nSugar					15 Mins");
				printf("\nMix Well				20 Mins");
				printf("\nAdd Coffee			 2 Mins");
				printf("\nAdd Milk				 4 Mins");
				printf("\nMix Well				20 Mins");
				break;
		}	
	}
	return 0;
}