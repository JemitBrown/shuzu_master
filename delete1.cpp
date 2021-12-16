#include <stdlib.h>
#include <stdio.h>
extern  int r;
extern  double a[100];
void delete1(int u)
{
	int e, i;
	system("cls");
	printf("\n\n\n\n             请输出想要删除的元素位置:");
	{
		scanf_s("%d", &e);
		if (e <= r && e > 0)
		{
			i = e;
			for (; i <= r; i++)
			{
				a[i] = a[i + 1];
			}
			r -= 1;
			system("cls");
			printf("\n\n         删除成功，已经自动返回菜单\n");
		}
	}
}