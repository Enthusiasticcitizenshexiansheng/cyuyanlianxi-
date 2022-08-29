#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
//p开头都是放入数据 sp换成一个串


//int main()
//{
//	FILE*pf=fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//
//	////写入
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	
//
//
//	//读取
//	int ch= fgetc(pf);
//	printf("%c", ch);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}






//2、读一行 fgets
//
//int main()
//{
//	char buf[400] = { 0 };
//	FILE* PF = fopen("test.txt", "r");
//	if (PF == NULL)
//	{
//		return 0;
//	}
//
//
//	/*fgets(buf, 400, PF);
//	
//	printf("%s", buf);*/
//	
//	fgets(buf, 400, PF);
//	puts(buf);  //自动换行
//	
//	
//	fclose(PF);
//	PF = NULL;
//	return 0;
//}
//
//









////3、写一行 fputs
//int main()
//{
//	char buf[400] = { 0 };
//	FILE* PF = fopen("test.txt", "w");
//	if (PF == NULL)
//	{
//		return 0;
//	}
//
//
//	fputs("nihao ", PF);
//	fputs("word", PF);
//
//	fclose(PF);
//	PF = NULL;
//	return 0;
//}
//



////4、键盘读取数据
//int main()
//{
//	char buf[1024] = { 0 };
//	fgets(buf, 400, stdin);
//	fputs(buf, stdout);
//	return 0;
//}









////5、格式化写文件
//struct S
//{
//	int e;
//	float wa;
//	char q[16];
//};
//
//
//
//int main()
//{
//	struct S s = { 120, 2.34f ,"we"};
//	FILE* pf = fopen("test.txt", "w");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//
//	fprintf(pf,"%d %f %s",s.e,s.wa,s.q);
//	
//	fclose(pf);
//	pf = NULL;
//	//printf("%s",pf);
//	return 0;
//}







//
////格式化读取
////5、格式化写文件
//struct S
//{
//	int e;
//	float wa;
//	char q[16];
//};
//
////int main()
////{
////	struct S s = {0};
////	FILE* pf = fopen("test.txt", "r");
////	if (pf == NULL)
////	{
////		return 0;
////	}
////
////	fscanf(pf, "%d %f %s", &(s.e), &(s.wa), s.q);
////	printf("%d %f %s",s.e,s.wa, s.q);
////	fclose(pf);
////	pf = NULL;
////	return 0;
////}
//
////标准输入输出 在结构体的综合运用
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin,"%d %f %s", &(s.e), &(s.wa), s.q);
//	fprintf(stdout, "%d %f %s", s.e, s.wa, s.q);
//}










////7.sprintf换成一个串
//struct S
//{
//	int e;
//	float wa;
//	char q[16];
//};
//int main()
//{
//	struct S s = { 100,12.1f,"asaasasas" }; 
//	char buf[400] = { 0 };
//	sprintf(buf,"%d %2f %s",s.e,s.wa,s.q);
//	printf("%s", buf);
//
//}






//8.sprintf换成一个串
struct S
{
	int e;
	float wa;
	char q[16];
};
int main()
{
	struct S s = { 100,12.1f,"asaasasas" };
		char buf[400] = { 0 };
		sprintf(buf,"%d %2f %s",s.e,s.wa,s.q);
	struct S tmp= { 0 };
	
	
	sscanf_s(buf, "%d %f %s",&(tmp.e),&(tmp.wa),tmp.q,20);

	printf("%f", tmp.wa);
	return 0;
}