#include <stdio.h>

int main() {
    int value = 10;       
    int *ptr = &value;   
    int **dptr = &ptr; 

    printf("Value: %d\n", value);         
    printf("Pointer to Value: %p\n", ptr);
    printf("Double Pointer to Value: %p\n", dptr); 

    return 0;
}
