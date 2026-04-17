#include<stdio.h>
int main()
{
    int r;
    printf("Enter the row of Matrix 1 :");
    scanf("%d",&r);
    int c;
    printf("\nEnter the column of Matrix 1 :");
    scanf("%d",&c);
    printf("\nEnter elements of first Matrix ");
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("\nEnter %d %d element of Matrix ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     int r2;
    printf("Enter the row of Matrix 2 :");
    scanf("%d",&r2);
    int c2;
    printf("\nEnter the column of Matrix 2 :");
    scanf("%d",&c2);
    printf("\nEnter elements of first Matrix ");
    int array[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("\nEnter %d %d element of Matrix ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}