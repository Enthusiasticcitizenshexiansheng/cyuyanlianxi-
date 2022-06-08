#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

//int main()
//{
//	int i;
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//a -  ---1,2,3,4,5
//	//a+2-----3,4,5,6,7
//	//jieguo -  1,2, 1,2,3,4,5  8,9,10
//	int* p = a;
//	memmove(a + 2,a, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}




//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret=dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest <src )
//	{
//		while (count--)
//		{
//			*(char*)src = *(char*)dest;
//			dest = 1 + (char*)dest;
//			src = 1 + (char*)src;
//		}
//	}
//	else {
//		while (count--)
//		{
//			*((char*)src + count) = *((char*)dest + count);
//		}
//
//	}return ret;
//}
//
//int main()
//{
//	int i;
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//a -  ---1,2,3,4,5
//	//a+2-----3,4,5,6,7
//	//jieguo -  1,2, 1,2,3,4,5  8,9,10
//	int* p = a;
//	my_memmove(a + 2,a, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



////2比空间大小 memcmp
//int main()
//{
//	int a[10] = { 1,4,3,4,5,6,7,8,9,10 };
//	int a2[10] = {1,3,4,5,6,7,8,9,0,2 };
//	int ret=memcmp(a,a2,8);
//	printf("%d",ret);
//	return 0;
//}
//



//3、memset（数组，‘字符’，多少个字节）
int main()
{
	int a[10] = { 1,4,3,4,5,6,7,8,9,10 };
	int i = 0;
	 memset(a, '#', 8);
	 for (i = 0; i < 2; i++)
		 	{
		 		printf("%c ", a[i]);
		 	}
	return 0;
}


