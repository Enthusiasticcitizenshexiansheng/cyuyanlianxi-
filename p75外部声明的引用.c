#include<stdio.h>

extern int ADD(int x, int y);

int main()
{
	int a = 10;
	int b = 23;
int c = ADD(a, b);
printf("%d \n", c);
	return 0;
}