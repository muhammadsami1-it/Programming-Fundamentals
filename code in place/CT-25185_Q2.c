#include <stdio.h>
int main(void) {
    int s1, s2, s3;

    printf("Enter side1 of triangle: ");
    scanf("%d", &s1);

    printf("Enter side2 of triangle: ");
    scanf("%d", &s2);

    printf("Enter side3 of triangle: ");
    scanf("%d", &s3);

    
    if ((s1 + s2 > s3) && (s2 + s3 > s1) && (s3 + s1 > s2)) 
	{
        printf("It is a valid triangle.\n");

        if (s1 == s2 && s2 == s3)
		{
            printf("This is an equilateral triangle.\n");
        } 
		else if (s1 == s2 || s2 == s3 || s3 == s1) 
		{
            printf("This is an isosceles triangle.\n");
        } 
		else 
		{
            printf("This is a scalene triangle.\n");
        }
    } 
	else {
        printf("This is not a valid triangle.\n");
    }


}

