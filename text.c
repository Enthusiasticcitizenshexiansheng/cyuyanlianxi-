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
//����
	struct Contact con;
//��ʼ��
	InitContact(&con);

	


	do
	{
		menu();
		printf("��ѡ��");
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
			printf("�˳�\n"); break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);




	return 0;
}
