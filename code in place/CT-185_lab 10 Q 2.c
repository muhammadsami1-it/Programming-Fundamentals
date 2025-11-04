#include <stdio.h>
#include <string.h> 
int main() 
{
    char s[] = "Hello";   
    char s_des[20];
    strcpy(s_des, s);
    printf("Copied string: %s\n", s_des);

    return 0;
}
