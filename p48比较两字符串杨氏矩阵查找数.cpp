#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

////1.str1后加一个str1 与str2比较
//int xuanchuan(char* str1, char* str2)
//{
//	int sz = strlen(str1);
//	int sz2 = strlen(str2);
//	if(sz!=sz2)
//	{
//		return 0;
//	}
//		
//    strncat(str1, str1,6);
//
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else {
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[30] = "defabc";
//	int ret = xuanchuan(arr1, arr2);
//
//	if(ret==1)
//	{
//		printf("两字符串相同");
//	}
//	else {
//		printf("不同");
//	}
//	return 0;
//}
//
//



//杨氏矩阵中找数
//int chazhao(int arr[3][3], int k, int hang, int lie)
//{
//	int x = 0; int y = lie - 1;
//	while (x <= hang - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret =chazhao(arr, k, 3, 3);
//		if(ret==1)
//	{
//		printf("zhaodaole");
//	}
//	else {
//		printf("meiyouzhaodao");
//	}
//	return 0;
//
//}




//3、有返回值
int chazhao(int arr[3][3], int k, int* px,int* py)
{
	int x = 0; int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}

	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret =chazhao(arr, k, &x, &y);
		if(ret==1)
	{
		printf("zhaodaole\n ");
		printf("x=%d y=%d", x, y);
	}
	else {
		printf("meiyouzhaodao");
	}
	return 0;

}
