#include <stdio.h>
#include <stdlib.h>
extern  double a[100];
void jiaohuan(int n)
{
	int e, d;
	double k;
	system("cls");
	printf("\n\n\n\n             请输入两个想要交换的元素位置并用空格隔开:");
	scanf_s("%d%d", &e, &d);
	k = a[e]; a[e] = a[d]; a[d] = k;
	system("cls");
	printf("\n\n         交换成功:)!");
}