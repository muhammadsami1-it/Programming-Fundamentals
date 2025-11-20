#include<stdio.h>
int main ()
{ 
int a=3, *aptr;
aptr=&a;
char b='A', *bptr;
bptr=&b;
float c=4.5, *cptr;
cptr=&c;
printf("%p\n", &a);
printf("%p\n", &b);
printf("%p\n", &c);
printf("%d\n", *aptr);
printf("%c\n", *bptr);
printf("%2.f\n", *cptr);
}