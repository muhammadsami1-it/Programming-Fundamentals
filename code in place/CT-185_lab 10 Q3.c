#include <stdio.h>
#include <string.h>
int main() 
{
    char firstName[20];
    char lastName[20];
    char fullName[50]; 
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    strcpy(fullName, firstName);
    strcat(fullName, lastName);
    printf("Full name: %s\n", fullName);
    return 0;
}
