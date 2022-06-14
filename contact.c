#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"


InitContact(struct Contact* p) {

	memset(p->data, 0, sizeof(p->data));
	p->size = 0;
}






void AddContact(struct Contact* p)
{
if(p->size ==MAX)
{
	printf("通讯录满");
}else
{
	printf("请输入名字：");
	scanf_s("%s", p->data[p->size].name);
	printf("请输入年龄：");
	scanf_s("%d", p->data[p->size].age);
	printf("请输入性别：");
	scanf_s("%s", p->data[p->size].sex);
	printf("请输入地址：");
	scanf_s("%s", p->data[p->size].dizhi);
	p->size++;
	printf("输入成功");
}
}


void showContact(const struct Contact* p)
{
	if(p->size==0)
	{
		printf("空的通讯录");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-8s\n", "姓名", "年龄", "性别", "地址");
		for (i = 0; i < p->size; i++)
		{
			printf("%-20s\t%-4s\t%-5s\t%-8s\n", 
				p->data[i].name,
				p->data[i].age,
				p->data[i].sex
		, p->data[i].dizhi);
		}
	}



		
}