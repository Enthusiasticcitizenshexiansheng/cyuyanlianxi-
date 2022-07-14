#define _CRT_SECURE_NO_WARNINGS 1


#include<stdlib.h>
#include"Contact.h"

void menu()
{
	printf("***********************\n");
	printf("***********************\n");
	printf("*1.add           2.del****\n");
	printf(" 3.search        4.modify\n");
	printf("*5.show          6.sort  \n*");
	printf("*0.exit************\n");

}

int main()
{
	int input = 0;
	int size = 0;
//创建
	struct Contact con;
//初始化
	InitContact(&con);

	


	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con); 
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			xiugai(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:break;
		case EXIT:
			printf("退出\n"); break;
		default:
			printf("选择出错\n");
			break;
		}

	} while (input);




	return 0;
}

