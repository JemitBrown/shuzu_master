#include <stdlib.h>
#include <stdio.h>
extern int r;
extern double a[100];
void charu(int n)
{
	int e, i;
	double k;
	system("cls");
	printf("\n\n\n\n             请输出想要插入的位置:");
	scanf_s("%d", &e);
	printf("\n             请输入想要插入的数字：");
	scanf_s("%lf", &k);
	r += 1;//增加数组个数
	while (1)
	{
		if (e > 0 && e <= (r + 1)) //逻辑判断
		{
			for (i = r; i >= e; i--)
			{
				a[i + 1] = a[i];
			}
			a[e] = k;//在想要的位置插入该数字
			break;
		}
		printf("\n            输入的数字超出元素个数范围");
		printf("\n            请输入1~尾数+1之内的数字（如果想给末尾加就输入尾数+1的数）");
		printf("\n\n\n\n             请输入插入数字的位序为:");
		scanf_s("%d", &e);
		printf("\n             您想插入的数字是？");
		scanf_s("%lf", &k);
	}
	system("cls");
	printf("\n\n         插入成功，我们已经回到菜单了喔。\n");
}