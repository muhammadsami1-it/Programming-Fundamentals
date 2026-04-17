#include<stdio.h>
char ptr (char* n)
{
printf("Character = %c", *n);
}
int main ()
{ 
char a='A';
ptr(&a);
return 0;
}