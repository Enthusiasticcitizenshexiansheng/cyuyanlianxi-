#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 20

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,
	SHOW, SORT,
	SAVE


};






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
//1
void AddContact(struct Contact* ps);

//5
void ShowContact(const struct Contact* ps);

//É¾³ý
void DelContact(struct Contact* ps);


//3²éÕÒ
void SearchContact(const struct Contact* ps);

void xiugai( struct Contact* ps);

//±£´æ
void SaveContact(struct Contact* ps);

void LoadContact(struct Contact* ps);