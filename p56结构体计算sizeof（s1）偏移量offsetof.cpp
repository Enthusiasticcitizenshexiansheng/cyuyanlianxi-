#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<stddef.h>


////拿小的进行计算 4/8 拿4 后续要是全部的整数倍
//struct s1
//{
//	int i;//4
//	char s;//1
//	double q;//8
//	//16
//};
//
//struct s2
//{	double q;//8
//char s;//1
//char w;//1
//	
//	//16
//};
//
//struct s3
//{
//	char s;//1
//	struct s2 sa;//(看首地址)8 +16  =24
//	double q;//8 
//	//32
//};
//
//
//
//int main()
//{
//	int ret =sizeof(s1);
//	printf("%d  ",ret);
//	int q = sizeof(s2);
//	printf("%d  ", q);
//	int a = sizeof(s3);
//	printf("s3=%d  ", a);
//	return 0;
//}





//
//
////改对其数pragma
//
//#pragma pack(4)
//struct s1
//{
//	char s;//1  3
//	int ss;// 4+4 8
//	double as;// 下一位为9   12+4 =16
//	//12
//};
//#pragma pack()
//
//
//int main()
//{
//	int ret =sizeof(s1);
//	printf("%d  ",ret);
//
//	return 0;
//}




 

//3.offsetof(struct(s2,q))  
// 看偏移量 看起始地址

struct s2
{	double q;// 0 8
char s;//1
char w;//1
	
	//16
};

struct s3
{
	char s;//1
	struct s2 sa;//(看首地址)8 +16  =24
	double q;//8 
	//32
};



int main()
{
	sizeof(s2);
	printf("%d\n", offsetof(struct s2,q));//0
	int a = sizeof(s3);
	printf("%d\n", offsetof(struct s3, sa));//8
	return 0;
}
