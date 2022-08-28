#include<stdio.h>


////1.打开 或 关闭文件 fopen fclose  二进制写入
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen( "te.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



////2、等待缓冲区满 再写入
//#include <windows.h>
//int main()
//{
//	while (1)
//	{
//		Sleep(10000);
//		printf("wdwqddqwd");
//	}return 0;
//}




////3.指针 指向open，打不开返回错误信息
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////4 创建和覆盖 原文件 w  a追加  b只
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("te.txt", "w");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



////5. 文件顺序读写 fgetc读 fputc放出来写
//#include<errno.h>
//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("tse.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//写文件 写入
//	fputc('c',pf);
//	fputc('w', pf);
//	//读 fgetc
//	printf("%c ", fgetc(pf));
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


#include <string.h>
////键盘 屏幕联动 
//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}




int main()
{
	FILE* fp;
	char c[] = "runool";
	char a[40];

	fp = fopen("w.text", "w+");
	//写入
	fwrite(c, strlen(c) + 1, 1, fp);       //c写入fp中
	
	fseek(fp, 0, SEEK_SET);//开头

	fread(a, strlen(c) + 1, 1, fp);
	//写到哪里 总大小 元素大小 指针
	
	
	printf("%s\n", a);
	printf("%s\n", a);
	fclose(fp);

	return 0;
}