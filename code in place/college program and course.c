#include <stdio.h>
int main (void){
    printf("This program based on your input tells you your Department\n");
    int dep, year,course;
    printf("Enter your department respectively");
    printf("\n1 BCIT");
    printf("\n2 Electrical Engineering ");
    scanf("%d", &dep);
    switch(dep){
        case 1:
            printf("Your depart is BCIT\n");
            printf("Enter your year respectively\n");
            printf("1 First\n");
            printf("2 Second\n");
            scanf("%d", &year);
            switch(year){
                case 1:
                    printf("You are first year student\n");
                    	printf("Select your course \n1 for Applied Physics\n2 for Functional English");
                    	scanf("%d",&course);
                     switch(course){
                     	case 1:
                     		printf("Your course is Applied physics");
                   		break;
                     	case 2:
                     		printf("Your course is Functional english");
                   		break;
                   	}
                break;
			
                case 2:
                    printf("You are second year student\n");
                    printf("Select your course \n1 for Object Oriented Programing \n2 for Discrete Structure");
                    	scanf("%d",&course);
                     switch(course){
                     	case 1:
                     		printf("Yo;ur course is Object Oriented Programing");
                   		break;
                     	case 2:
                     		printf("Your course is Discrete Structure");
                 		break;
							 }
                break;
            }
            break;
    case 2:
        printf("Your depart is Electrical Engineering ");
        printf("Enter your year respectively\n");
            printf("1 First\n");
            printf("2 Second\n");
            scanf("%d", &year);
            switch(year){
                case 1:
                    printf("You are first year student\n");
                    	printf("Select your course \n1 for Applied Physics\n2 for Functional English");
                    	scanf("%d",&course);
                     switch(course){
                     	case 1:
                     		printf("Your course is Applied physics");
                     	break;
                     	case 2:
                     		printf("Your course is Functional english");
                     	break;
							 }	
                break;
					
                case 2:
                    printf("You are second year student\n");
                    printf("Select your course \n1 for ITFA \n2 for ICP");
                    	scanf("%d",&course);
                     switch(course){
                     	case 1:
                     		printf("Your course is ITFA");
                     	break;
                     	case 2:
                     		printf("Your course is ICP");
                     	break;
							 }
        		break;
        	}

    default:
        printf("Invalid Input");
}
return 0;
}
