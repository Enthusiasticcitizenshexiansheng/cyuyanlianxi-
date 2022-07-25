#include<stdio.h>
#include<stdlib.h>


//////非法访问 （返回栈区地址）
////char* getkongjian(void)
////{
////	char p[] = "nihao";
////	return p;
////}
////
////void test(void)
////{
////	char* str = NULL;
////	str = getkongjian();
////	printf(str);
////}//打印随机值，p指向的空间丢失
////
////int main()
////{
////	test();
////	return 0;
////}


////2.栈变静态区
//int* test()
//{
//	static int a = 10;  //静态区
//	return &a;
//}
//int main()
//{
//	int*p =test();
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}
//


//
////3.返回堆空间 仅free可回收
//int* test()
//{
//	int *ptr = malloc(30);  //堆区
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}



//
////4.没释放空间
////非法访问 （返回栈区地址）
//char* getkongjian(char **p,int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void test(void)
//{
//	char* str = NULL;
//	 getkongjian(&str,100);
//	 strcpy(str, "nihao");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}








//5.if判断失效

void test(void)
{
	char* str = (char* )malloc(30);
	strcpy(str, "nihao");
	printf(str);  free(str);

	str = NULL;
//Word，不能拷贝到空指针str上。	
	if (str != NULL)
	{
		strcpy(str, "word");
		printf(str);
	}

}

int main()
{
	test();
	return 0;
}