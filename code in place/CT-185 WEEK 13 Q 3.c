#include<stdio.h>

int main()
{
   int *arr = (int*)malloc(3 * sizeof(int));
   arr =(int*)realloc(arr, 2 * sizeof(int)); 
   printf("Enter array elements:\n ");
   for (int I =0; I < 5; I++) {
   scanf("%d\t",&arr[I]);
   }
   for (int I =0; I < 5; I++) {
   printf("%d\t",arr[I]);
   }

   free(arr);
    return 0;
}