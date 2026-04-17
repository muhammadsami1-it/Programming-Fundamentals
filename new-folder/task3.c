#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, *arrptr;
    arrptr = &arr;
    printf("%d\n", *arrptr);
    printf("%d\n", *(arrptr + 1));
    printf("%d\n", *(arrptr + 2));
    printf("%d\n", *(arrptr + 3));
    printf("%d\n", *(arrptr + 4));
}