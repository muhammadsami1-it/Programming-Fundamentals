#include<stdio.h>
int main()
{
	float weight;
	printf("This pragram calculates the dosage of Medicine depending on the Patients weight ");
	printf("\nEnter the weight of patient :");
	scanf("%f",&weight);
	float dosage;
	dosage=weight * 0.8;
	printf("the Dosage of medicine gor the patient is %f mg",dosage);
	
	
}
