#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>


//
////比较strcmp 逐步比较每个字符
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcd";
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}






////2.实现比较strcmp
//int my_strcmp(char *a,char* b)
//{
//	while (*a==*b)
//	{
//		if(*a == '\0')
//		{
//			return 0;
//		}
//		a++;
//		b++; 
//	}
//	if (*a > *b)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}





//2、拷贝strncpy(与\0无关)  关注拷贝(覆盖)个数 少不要\0,不够补\0

//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "koko";
//	char* ret = strncpy(arr1, arr2,3);
//	printf("%s", arr1);
//	return 0;
//}


int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "koko";
	char* ret = strncpy(arr1, arr2,2);
	printf("%s", arr1);
	return 0;
}




//
////3、strncat追加（含\0） 超过不管
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "koko";
//	char* ret = strncat(arr1, arr2, 9);
//	printf("%s", arr1);
//	return 0;
//}