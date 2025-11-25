#include<stdio.h>
int main()
{
        int n;
        printf("Enter number of elements of the array : ");
        scanf("%d",&n);
        int arr[n];
        printf("\nEnter elements of the array\n");
        for(int i=0;i<n;i++)
        {
                printf("Enter %d element of array : ",i+1);
                scanf("%d",&arr[i]);
        }
        // unsorted array
           printf("Unsorted array = {");
        for(int i=1;i<n;i++){
                printf("%d,",arr[i-1]);
             if (i == n-1) printf("%d}",arr[i]);
        }
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<(n-1)-i;j++)
                {
                        if(arr[j]>arr[j+1]){
                                int temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;

                        }else
                        {
                                arr[j]=arr[j];
                        }
                }
        }
        //print array
        printf("\nSorted Array = {");
        for(int i=1;i<n;i++){
                printf("%d,",arr[i-1]);
             if (i == n-1) printf("%d}",arr[i]);
        }
        
}