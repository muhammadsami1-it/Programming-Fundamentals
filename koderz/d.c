#include <stdio.h>

int main() {
    int t, sum = 0;
    scanf("%d", &t);
    int n[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < t; i++) {
        sum = 0;
        printf("%d\n", sum);
    }
    return 0;
}