#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    int sum = 0;
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }
    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
