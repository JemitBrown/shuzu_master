#include <stdio.h>
#include <stdlib.h>
extern  double a[100];
void jiaohuan(int n)
{
	int e, d;
	double k;
	system("cls");
	printf("\n\n\n\n             ������������Ҫ������Ԫ��λ�ò��ÿո����:");
	scanf_s("%d%d", &e, &d);
	k = a[e]; a[e] = a[d]; a[d] = k;
	system("cls");
	printf("\n\n         �����ɹ�:)!");
}