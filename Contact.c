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






//内部封装查找
static int Findname(const struct Contact* ps,char name[30])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name));
		{return i; }
	}
	return -1;
}





//删除
void DelContact(struct Contact* ps) 
{

	char name[30];
	printf("删谁？：");
	scanf("%s", name);
	//查找
	//返回下标 或 -1
	int pos = Findname(ps, name);

	if (pos==-1)
	{
		printf("不存在要删除的人");
	}
	else
	{
		//删除
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
}	ps->size--;
		printf("删除成功");
	}

}



//3查找
void SearchContact(const struct Contact* ps)
{
	char name[30];
	printf("查找人的名字：");
	scanf("%s", name);
	int pos = Findname(ps, name);
	if(pos==-1)
	{
		printf("不存在这个人");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].add
			);
		}

	}


}






//修改
void xiugai(struct Contact* ps) {
	char name[30];
	printf("修改人的名字：");
	scanf("%s", name);
	int pos =Findname(ps, name);
	if(pos==-1)
	{
		printf("不存在这个人");
	}
	else
	{
		printf("名字：");
		scanf("%s", ps->data[pos].name);
		printf("年龄：");
		scanf_s("%d", &(ps->data[pos].age));
		printf("性别");
		scanf("%s", ps->data[pos].sex);
		printf("电话：");
		scanf("%s", ps->data[pos].tele);
		printf("地址：");
		scanf("%s", ps->data[pos].add);

		ps->size++;
		printf("修改成功\n");
	}
}