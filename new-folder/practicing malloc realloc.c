#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a=(int *)malloc(3 *sizeof(int));
   /* a[0]=10;
    a[1]=30;
    a[2]=50;
    a[3]=70;*/
    for(int I=0;I < 4; I ++){
    scanf("%d",&a[I]);}
      for(int I=0;I < 4; I ++){
    printf("%d ",a[I]);} 
    a=(int *)realloc(a,2*sizeof(int));
   /* a[4]=90;
    a[5]=110;*/
      for(int I=4;I < 6; I ++){
    scanf("%d",&a[I]);}
     for(int I=0;I < 6; I ++){
     printf("%d ",a[I]);}
    free(a);
    return 0;
}