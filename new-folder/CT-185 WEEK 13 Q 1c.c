#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number of which length of array you want :");
    scanf("%d",&n);
    float *arr= (float*)malloc(n*sizeof(float));
    printf("Enter array elements\n");
    for (int I=0;I<n;I++){
    scanf("%f",&arr[I]);
    }
    printf("printing array\n");
    for(int I=0;I<n;I++){
    printf("%f\n",arr[I]);
    }
    free(arr);
    return 0;
}