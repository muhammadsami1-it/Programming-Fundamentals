#include<stdio.h>
int main ()
{
    int target;
    printf("Enter target number:");
    scanf("%d",&target);
    int elements;
printf("Enter how many elements of arrays you want");
scanf("%d",&elements);
int arr[elements];
printf("enter elements of arrays");
for(int i=0;i<elements ;i++){
scanf("%d",&arr[i]);
}
    for(int i=0;i<5;i++){
       if (i+1 == 5){ break;};
        if(arr[i]+arr[i+1] == target){
             printf("[%d,%d]",i,i+1);
        }
    }
  
}
    