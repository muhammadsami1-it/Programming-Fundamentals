#include <stdio.h>
int main(void) 
{
	int Num;
	printf("Enter a number:");
	scanf("%d", &Num);
	if((Num & 72) == 72) { // Check if 4th and 7th bits are ON
	printf("The 4th and 7th bits are on.\n");
	Num = Num & ~72; // Turn OFF 4th and 7th bits 
	printf("With 7th and 4th bits off: %d\n", Num);
	}
	else {
	printf("The 4th and 7th bits are not both ON.\n");
	}
	return 0;
}
