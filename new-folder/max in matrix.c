#include<stdio.h>
int main()
{
    int r;
    printf("Enter the row of Matrix :");
    scanf("%d",&r);
    int c;
    printf("\nEnter the column of Matrix :");
    scanf("%d",&c);
    int arr[r][c];
     printf("\nEnter elements of Matrix ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
   int max =0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           if (arr[i][j] > max) max = arr[i][j];
        }
    }
    printf("%d is the maximum value in the matrix",max);
    return 0;
}