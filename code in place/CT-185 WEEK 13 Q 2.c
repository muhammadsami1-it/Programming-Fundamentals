#include<stdio.h>

int main()
{
    int *arr= (int*)calloc(10,sizeof(int));
    printf("printing array\n");
    for(int I=0;I<10;I++){
    printf("%d\n",arr[I]);
    }
    free(arr);
    return 0;
}