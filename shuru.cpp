#include <stdio.h>
#include <stdlib.h>
extern  double a[100];
extern  int r;
void shuru(int n)
{
	int i, k;
	system("cls");
	printf("\n\n\n\n         ��������Ҫ��������ֵĸ���,ʹ�ûس�����:");
	scanf_s("%d", &i);
	r = i;//��Ԫ�ظ�����ֵ��ȫ�ֱ���r
	printf("\n\n\n\n         ���������Ԫ�أ�ʹ�ÿո����\n         ���һ������������Ϻ�ʹ�ûس�����\n\n         ");
	printf("\n         �뿪ʼ���룺");
	a[0] = 9;
	for (k = 1; k <= i; k++)
		scanf_s("%lf", &a[k]);
	printf("         ����ɹ��������Ѿ�Ϊ���Զ����ز˵�ѡ�\n");
}