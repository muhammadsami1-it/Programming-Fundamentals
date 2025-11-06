#include<stdio.h>
int main()
{
	int arr[4]={2,3,4,1};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3-i;j++)
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
	for(int i=0;i<4;i++){
		printf("%d",arr[i]);
	}
}
