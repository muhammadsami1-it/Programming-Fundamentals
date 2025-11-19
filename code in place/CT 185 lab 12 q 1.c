#include<stdio.h>
int sumofnaturalnumber(int n)
{
if (n==0) return 0;
else return n + sumofnaturalnumber(n-1);
}
int main ()
{ 
printf("sum of natural numbers upto 5 = %d", sumofnaturalnumber(5));
}