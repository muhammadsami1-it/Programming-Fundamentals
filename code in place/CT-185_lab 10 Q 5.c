#include <stdio.h>
#include <string.h>
int main() 
{
    char s[] = "Programming";   
    char s_des[5];
	strncpy(s_des, s, 4);
	s_des[4] = '\0';
    printf("Copied string: %s\n", s_des);
    return 0;
}
