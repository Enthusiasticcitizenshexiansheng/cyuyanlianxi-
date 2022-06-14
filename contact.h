#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000
#define MAX_a 20
#define MAX_b 20
#define MAX_c 20

#include<stdio.h>
#include<string.h>

struct PeoInfo
{
	char name[MAX_a];
	int age;
	char sex[MAX_b];
	char dizhi[MAX_c];
};

//定义通讯录
struct Contact
{
	
	struct PeoInfo data[MAX];
	int size;

};


InitContact(struct Contact *p);
void AddContact(struct Contact* p);
void showContact(const struct Contact* p);