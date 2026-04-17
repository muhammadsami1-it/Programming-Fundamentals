#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr=(int *)malloc(3 *sizeof(int));
    for(int I=0;I < 4; I ++){
    scanf("%d",&arr[I]);}
     /* for(int I=0;I < 4; I ++){
    printf("%d ",arr[I]);}*/
    *arr=(int *)realloc(5 , sizeof(int));
      for(int I=0;I < 2; I ++){
    scanf("%d",&arr[I]);}
     for(int I=0;I < 2; I ++){
    printf("%d ",arr[I]);}
    free(arr);
    return 0;
}