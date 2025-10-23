#include <stdio.h>
int main() {
 
      int A[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {   scanf("%d",&A[i][j]);}

    }
    // printf("You enter");
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //     printf("%d",A[i][j]);
         
    //     }
    //     printf("\n");
    // }
      int B[3][2];
    //   int B[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {   scanf("%d",&A[i][j]);}

    }
    // printf("You enter");
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //     printf("%d",A[i][j]);
           
    //     }
    //     printf("\n");
    // }
    int C[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            C[i][j]=0;
            for(int k=0;k<3;k++){
                C[i][j]+=A[i][k]*B[k][j];}
            }
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
           
               printf("%d " ,C[i][j]);
            }
            printf("\n");
        }
        
    return 0;
}