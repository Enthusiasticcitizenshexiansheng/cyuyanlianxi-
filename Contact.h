#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 20

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char add[30];

};


struct Contact
{
	struct PeoInfo data[MAX];
	int size;

};



//ÉùÃ÷
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);