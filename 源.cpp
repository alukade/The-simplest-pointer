#include<stdio.h>

int main()
{
	char a = 'F';
	int b = 123;

	char* pa = &a;//a是啥类型*pa就是啥类型
	int* pb = &b;

	printf("a=%c\n", *pa);
	printf("b=%d\n", *pb);

	return 0;


}