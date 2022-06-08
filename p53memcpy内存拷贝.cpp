#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<string>
void* my_memcpy(void* a, void* qb, size_t num)
{
	char* ret =(char*) a;
	
	assert(a != NULL);
	assert(qb != NULL);
	while (num--)
	{
		*(char*)qb = *(char*)a;
		++(char*)a;
		++(char*)qb;
	}return ret;
}

int main()
{
	int i = 0;

	int arr1[] = { 1,2,3,45,5 };
	int arr2[28] = { 0 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	my_memcpy(arr2, arr1, 20);
	for (i = 0; i < sz; i++)
	{		printf("%d ", arr2[i]);
}
	return 0;
}