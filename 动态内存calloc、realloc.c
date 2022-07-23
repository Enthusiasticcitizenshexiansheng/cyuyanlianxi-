#include<stdio.h>
#include<stdlib.h>




//
////1、内存分配：calloc(数量，大小)  自动初始为零
//int main()
//{
//  //malloc(10*sizeof(int))
//	int* p = calloc(10, sizeof(int));
//	 if(p==NULL)
//	 {
//		 printf("%s \n", strerror(errno));
//	 }
//
//	 else
//	 {
//		 int i = 0;
//		 for(i=0;i<10;i++)
//		 {
//			 printf("%d  ", *(p + i));
//		 }
//	 }
//
//	 free(p);
//	 p = NULL;
//
//	return 0;
//}






//2、realloc
//动态开辟内存大小
////int main()
////{
////	
////	int* p = (int*)malloc(20);
////	if (p == NULL)
////	{
////		printf("%s \n", strerror(errno));
////	}
////
////	else
////	{
////		int i = 0;
////		for (i = 0; i < 5; i++)
////		{
////			 *(p + i)=i;
////		}
////	}
////
////
////	int* p2 = realloc(p, 40);
////	int i = 0;
////	for(i=0;i<10;i++)
////	{
////		printf("%d ", *(p2 + i));
////	}
////	free(p);
////	p = NULL;
////
////	return 0;
////}



//
////版本2
////int main()
////{
////	
////	int* p = (int*)malloc(20);
////	if (p == NULL)
////	{
////		//printf("%s \n", strerror(errno));
////	}
////
////	else
////	{
////		int i = 0;
////		for (i = 0; i < 5; i++)
////		{
////			 *(p + i)=i;
////		}
////	}
////
////
////
////
////
////int* p2 = realloc(p, 40);
////	int i = 0;
////
////	for (i = 5; i < 10; i++)
////	{
////		*(p + i) = i;
////	}
////
////	
////	for(i=0;i<10;i++)
////	{
////		printf("%d ", *(p2 + i));
////	}
////	free(p2);
////	p2= NULL;
////
////	return 0;
////}












//版本3：全用p为指针
int main()
{

	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s \n", strerror(errno));
	}

	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}


	//地址会变
	int* ptr = realloc(p, 4000);
	if (ptr != NULL)
	{
		p = ptr;
	}//以防开辟空间不够
	
	
	int i = 0;

	for (i = 5; i < 10; i++)
	{
		*(p + i) = i;
	}


	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;

	return 0;
}



//几种常见错误
//1空间不够 p指针为空 进行接引
//2动态越界
//3free掉非栈区的q  其中*q=a=10
