#include <stdio.h>
int main() 
{
    float calories,fat,fat_calories,percentage;
    printf("Enter the calories:");
    scanf("%f", &calories);
    printf("Enter the amount of fats (gms): ");
    scanf("%f", &fat);
    fat_calories=fat*9.0;
    percentage=fat_calories/calories;
    if (calories< 0 || fat < 0 || percentage > 1) {
        printf("Invalid inputs!");
        return 0;
    }
    printf("REPORT\n");
    printf("\nThe calories from fats are: %.2f\n", fat_calories);
    printf("The percentage of calories from fats are: %.2f\n", percentage*100);
    if(percentage<0.3)
	{
        printf("The food is low in fat.");
    }
    return 0;
}