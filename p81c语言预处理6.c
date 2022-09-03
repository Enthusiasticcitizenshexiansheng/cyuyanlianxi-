#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>

//
////偏移量offsetof 下面自定义偏移量
//#define Offsetof(struct_name,chengyuan_name) (int)&(((struct_name*)0)->chengyuan_name)
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	struct S s;
//	//printf("%d\n", offsetof(struct S,c1));
//	//printf("%d\n", offsetof(struct S, a));
//	//printf("%d\n", offsetof(struct S, c2));
//
//
//	printf("%d\n", Offsetof(struct S, c1));
//	printf("%d\n", Offsetof(struct S, a));
//	printf("%d\n", Offsetof(struct S, c2));
//	return 0;
//}
//
//





//有错 无法运行
//int mian()
//{
//	unsigned char puc[4];
//	struct ti
//	{
//		unsigned char pi1;
//		unsigned char pi2:1;
//		unsigned char pi3:2;
//		unsigned char pi4:3;
//	}*pd;
//	pd = (struct ti*)puc;
//	memset(puc, 0, 4);
//	pd->pi1 = 2;
//	pd->pi2 = 3;
//	pd->pi3 = 4;
//	pd->pi4 = 5;
//	printf("%02x %02x %02x %02x", puc[0],puc[1],puc[2],puc[3]);
//	return 0;
//}









//union UN {
//	short s[7];
//	int n;
//};
//
//int main()
//{
//	printf("%d", sizeof(union UN));
//	return 0;
//
//}







int main()
{
	union 
	{
		short k;
		char i[2];

	}*s,a;
	s = &a;
	s->i[0] = 0x39;
	s->i[1] = 0x82;
	printf("%x", a.k);

}