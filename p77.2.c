#include<stdio.h>

////p77-1 1.预定义符号及指令__FILE__位置
////#define MX 100
//#define str "hehe"  //用后者
//
//
//int main()
//{
//	//printf("%d\n", MX);
//	//printf("%s\n", __FILE__);//地址
//
//
//	int i = 0;
//	FILE* pf = fopen("text.txt", "w");
//	fprintf(pf, "file %s   line %d    data %s   time %s",
//		__FILE__, __LINE__, __DATE__, __TIME__);//位置 行  日期 时间 放入 后放前
//	printf("%s  ", __FUNCTION__);
//	printf("%s", str);
//
//	//printf("%s", __STDC__);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//
////2.宏定义是替换
//#define doubl(x) ((x)*(x))
//#define jia(y) ((y)+(y))
//int main()
//{
//	int a = 10;
//	printf("%d \n", 2 * doubl(a));
//
//	int b = 8;
//	int z = jia(b) * 2;
//	printf("%d ", z);
//	return 0;
//}


////p78-1 串中的特定名称 不会被替换
//#define kuaikan 2000
//
//int main()
//{
//	printf(" kuaikan 用户数量：%d(kuaikan名称不会被替换)", kuaikan);
//
//	return 0;
//}



////p78-2 参数替换字符串中的特定名称
//
//#define PRIN(X) printf("the vale "  #X  " is %d",X)
//int main()
//{
//	int a = 15;
//	PRIN(a);
//	return 0;
//}




//p78-3 在宏定义（define）中 ## 可合并符号

#define HECHEN(A,B)  A##B
int main()
{
	int class5 = 65;
	printf("class5 renshu wei :%d ", HECHEN(class, 5));
	return 0;
}