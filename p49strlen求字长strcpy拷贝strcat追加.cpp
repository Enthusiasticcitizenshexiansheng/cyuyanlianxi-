#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE；
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

////1、strlen实现方式
//int  my_strlen(char* p)
//{
//	assert(p != NULL);
//
//	int count=0;
//	while (*p != '\0')
//	{
//		count++;
//		p=p+1;
//	
//	}return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d",ret);
//	return 0;
//}

////2、strlen 为无符号形数
//int main()
//{
//	if(strlen("abc")-strlen("abcdef")>0)
//	{
//		printf("hehe -3的绝对值是正数");
//	} else
//	{
//		printf("haha");
//	}
//	return 0;
//}


//
////3.拷贝 左侧对其
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}




//
////4.拷贝实现方式
//
//char* my_strcpy(char* a, char* b)
//{
//	char* ret = a;
//	assert(a && b);
//	while (*a++ = *b++)
//	{
//	};
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


 
////5.追加
//int main()
//{
//
//	char arr1[30] = "shijie";
//	char arr2[] = " ni hao";
//	strcat(arr1, arr2);
//	printf("%s",arr1);
//
//	return 0;
//}






//6.追加实现方式
 char* my_strcat(char* a, const char* b)
{
	 char* ret = a;
	while ((*a) != '\0')
	{
		a++;
	}
	while (*a++ = *b++)
	{
	};
	return ret;
}

int main()
{

	char arr1[30] = "shijie";
	char arr2[] = " ni hao";
	my_strcat(arr1, arr2);
	printf("%s",arr1);

	return 0;
}

