
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//
//int main()
//{
//	const char* a1 = "abcde";
//	const char* a2= "bc";
//	const char* ret=strstr(a1, a2);
//	if (ret ==NULL)
//	{
//		printf("不存在");
//	}
//	else {
//		printf("%s\n",ret);
//	}
//	return 0;
//}










char* my_strstr(const char* a1, const char* a2)
{
	assert(a1 != NULL);
	assert(a2 != NULL);
	const char* p1 = NULL;
	const char* p2 = NULL;
	char* cur = (char*)a1;
	if (*a2 == '\0')
	{
		return (char*)a1;
	}
	while (*cur)
	{
		p1 = cur;
		p2 = (char*)a2;
		while ((*p1 != '\0') && (*p2 != '\0') && (*p1 == *p2))
		{
			p1++;
			p2++;
		}if (*p2 == '\0')
		{
			return (char*)cur;
		}cur++;
		if (*p1 == '\0')
		{
			return NULL;//没有这个if， 会在while (*cur)为假时跳出。
		}
	}
	return NULL;
}

int main()
{
	const char* a1 = "a";
	const char* a2 = "bc";
	const char* ret = my_strstr(a1, a2);
	if (ret == NULL)
	{
		printf("不存在");
	}
	else {
		printf("%s\n", ret);
	}
	return 0;
}