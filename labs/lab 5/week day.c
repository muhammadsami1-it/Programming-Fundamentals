#include<stdio.h>
int main()
{
	int day;
	char c;
	printf("Enter days of the week respectively \n 1 for Monday \n 2 for Tuesday \n 3 for Wednesday \n 4 for Thursday \n 5 for Friday \n 6 for Saturday \n 7 for Sunday\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
				printf("Enter M for morning \n E for evening ");
				scanf("%c",&c);
				switch(c){
			case 'M':
			case 'm':
				printf("Go to Class");
			break;
			case 'E':
			case 'e':
				printf("Do Homework");
			break;
			default:
			printf("invalid input\n");	
		}	
		break;
		case 6:
		case 7:
			printf("Enter M for morning \n E for evening");
			scanf("%c",&c);
		switch(c){
			case 'M':
			case 'm':
				printf("Play sports");
			break;
			case 'E':
			case 'e':
				printf("Watch movies");
			break;
			default:
			printf("invalid input\n");	
		}
		break;
		default:
			printf("Invalid input\n");	
	}
}
