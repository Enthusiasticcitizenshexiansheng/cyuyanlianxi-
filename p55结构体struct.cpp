#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>


////1. struct结构体  [] 对应%s, char 对应 c
// struct s
//{
//	char mingzi[256];
//	char xingbie;
//	int age;
//};
//int main()
//{
//	struct s a= {"xiaoming",'nan',5};
//	printf("%s\n %c %d",a.mingzi,a.xingbie,a.age);
//	return 0;
//}




//
////2.自引用
//struct NOK {
//	int data;
//	struct NOK* n;
//};
//
//int main()
//{
//	struct NOK n1;
//	return 0;
//}



//3.初始化
struct k
{
	char a[20]; int b;

};

int main()
{
	struct k c = { "sqasxsqq",90 };
	printf("%s  %d", c.a, c.b);
	return 0;
}









