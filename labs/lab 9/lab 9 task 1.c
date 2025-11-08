#include<stdio.h>
int main(){
	int a=5;
	int *p=&a;
	printf("%u\n",p);
//	printf("%p\n",p);
	printf("%d\n",a);
//	printf("%p\n",&p);
	printf("%u\n",&p);
	printf("%u\n",&a);
//	printf("%p\n",&a);
	printf("%d\n",*p);
}
