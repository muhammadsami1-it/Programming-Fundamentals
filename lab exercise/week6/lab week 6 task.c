#include <stdio.h>

int main(){
    int num;
    printf("enter a ");
    scanf("%d",&num);
    int i = 1;
    int factorial = 1;

    while(i <= num){
        factorial = factorial * i;
        i++;     
    }
    printf("%d",factorial);
}
