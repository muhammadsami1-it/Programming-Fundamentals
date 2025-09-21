#include<stdio.h>
int main (void)
{
	char ch;
    int asciicode;
	printf("enter any character:");
	scanf("%c",&ch);
    asciicode = ch; 
    if(asciicode>=65 && asciicode<=90)
    {
    	printf("The Character is a Upper Case leeter");
	}
	else if(asciicode>=97 && asciicode<=122)
    {
    	printf("The Character is a Lower Case leeter");
	}
	else if(asciicode>=48 && asciicode<=57)
    {
    	printf("The Character is a Digit");
	}
	else{
		printf("This is a special character");	
	}
	
}
