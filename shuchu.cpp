#include <stdlib.h>
#include <stdio.h>
extern int r;
extern double a[100];
void shuchu(int n)
{
	{
	int i;
	printf("����Ԫ��Ϊ������ʾ��\n\n");
			printf("{");
			for (i = 1; i <= r; i++)
				if (i != r)
					printf(" %.0f, ", a[i]);
				else printf(" %.0f ", a[i]);
			printf("}");
	}
	printf("\n\n\n\n\n ����ɹ�! �Ѿ��Զ����ص��˲˵�ร�\n\n\n\n\n");
}