#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number of which length of array you want :");
    scanf("%d",&n);
    int *arr= (int*)malloc(n*sizeof(int));
    for (int I=0;I<n;I++){
    arr[I]=I*I;
    }
    printf("printing array\n");
    for(int I=0;I<n;I++){
    printf("%d\n",arr[I]);
    }
    free(arr);
    return 0;
}