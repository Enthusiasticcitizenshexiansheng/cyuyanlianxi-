#define _CRT_SECURE_NO_WARNINGS 1

#include"Contact.h"


void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps -> data));
	ps->size = 0;
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX) {
		printf("通讯录满了，无法增加\n");
	}
	else
	{
		printf("名字：");
		scanf("%s", ps->data[ps->size].name);
		printf("年龄：");
		scanf_s("%d", &(ps->data[ps->size].age));
		printf("性别");
		scanf("%s", ps->data[ps->size].sex);
		printf("电话：");
		scanf("%s", ps->data[ps->size].tele);
		printf("地址：");
		scanf("%s", ps->data[ps->size].add);

		ps->size++;
		printf("添加成功\n");
	}
}



void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名","年龄","性别","电话","地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].add
				);
		}
	}
}