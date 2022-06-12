#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>




//struct A
//{
//	char i;
//	int s;
//	int b;
//};
//
//int main()
//{
//	struct A a;
//	a.s = 10000;
//	a.b = 400;
//	
//	printf("%d", a.b);
//
//	return 0;
//}
//





//自定义Init 加 打印
struct A
{
	char i;
	int s;
	int b;
};
void Init(struct A *a) 
{
	a->i = 'w';
	a->b = 200;
};
void print(struct A tmp)
{
	printf("%c %d",tmp.i,tmp.b);
}


int main()
{
	struct A a;
	Init(&a);
	print(a);

	return 0;
}



