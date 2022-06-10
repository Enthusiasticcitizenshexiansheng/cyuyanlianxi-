#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

//int main()
//{
//	char a[] = "112.1.3.4.1@321 ";
//	const char* b = "@.";
//	char* ret = strtok(a, b);
//	printf("%s\n",ret);
//	 ret = strtok(NULL, b);
//	 printf("%s", ret);
//	return 0;
//}


////strtok分隔符
//int main()
//{
//	char a[] = "112.1.3.4.1@321 ";
//	const char* b = "@.";
//
//	char* ret = NULL;
//
//	for (ret = strtok(a,b); ret != NULL; ret = strtok(NULL, b))
//		//主要在for进行单项循环；
//	{
//printf("%s ", ret);
//	}
//	
//	return 0;
//}


////2、strerror(错误码)
//int main()
//{
//	char* p = strerror(errno);printf("1=%s\n", p);
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		printf("2=%s\n",strerror(errno));
//	}
//	return 0;
//}


#include<ctype.h>


////2、islower判断小写
////tolower(arr[i]);//转换为小写
int main()
{	int i = 0;
	//char p = 'd';
	//int ret = islower(p);//返回数字
	////islower判断小写
	//printf("%d\n", ret);



	char arr[] = "I AM student";

	while (arr[i])
	{
		if (isupper(arr[i]))//大写
		{
			arr[i] = tolower(arr[i]);//小写
		}i++;
	}
	printf("%s \n",arr);
	return 0;
}