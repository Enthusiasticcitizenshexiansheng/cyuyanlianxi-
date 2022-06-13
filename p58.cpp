#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

////1、字段
//struct A
//{
//	int d : 2;
//	int q : 5;
//	 int sa :10;
//	 int saa : 30;
//};//  8 
//int main() {
//	struct A s;
//	printf("%d", sizeof(s));
//	return 0;
//}








//2、char 拿八个比特位 一个字节的空间来存
//struct A
//{
//	char wq : 3;
//	char qw: 7;
//};//  2 
//int main() {
//	struct A s;
//	printf("%d", sizeof(s));
//	return 0;
//}




struct A
{
	char a : 3;
	char  b: 4;
	char c : 5;
	char  d: 4;

};//  2 
int main() {
	struct A s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	//00000000 00000000 00000000 00000000
	// 0100010    01100     1000
   //22          0c         08   00
	printf("%d", sizeof(s));
	return 0;
}
