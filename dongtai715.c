#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>

int main()
{
	int* p = (int*)malloc(40);
	char errmsg[40];
	if(p==NULL)
	{
		printf("%s\n", strerror_s(errmsg,*p,errno));
		
	}

	else
	{
		//�����ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}

		for (i = 0; i < 10; i++)
		{
			printf("%d " ,*(p + i)) ;
		}
	}

	free(p);
	p = NULL;
	return 0;
}