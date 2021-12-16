#include <stdio.h>
#include <stdlib.h>
extern  double a[100];
extern  int r;
void shuru(int n)
{
	int i, k;
	system("cls");
	printf("\n\n\n\n         请输入你要输入的数字的个数,使用回车结束:");
	scanf_s("%d", &i);
	r = i;//把元素个数赋值给全局变量r
	printf("\n\n\n\n         请输入各个元素，使用空格隔开\n         最后一个数字输入完毕后使用回车结束\n\n         ");
	printf("\n         请开始输入：");
	a[0] = 9;
	for (k = 1; k <= i; k++)
		scanf_s("%lf", &a[k]);
	printf("         输入成功，我们已经为您自动返回菜单选项。\n");
}