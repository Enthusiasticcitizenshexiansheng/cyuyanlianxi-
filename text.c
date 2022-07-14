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
		case 1:
			AddContact(&con); 
			break;
		case 2:break;
		case 3:break;
		case 4:break;
		case 5:
			ShowContact(&con);
			break;
		case 6:break;
		case 0:
			printf("退出\n"); break;
		default:
			printf("选择出错\n");
			break;
		}

	} while (input);




	return 0;
}

