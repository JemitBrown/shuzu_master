#include <stdlib.h>
#include <stdio.h>
extern int r;
extern double a[100];
void shuchu(int n)
{
	{
	int i;
	printf("数组元素为以下所示：\n\n");
			printf("{");
			for (i = 1; i <= r; i++)
				if (i != r)
					printf(" %.0f, ", a[i]);
				else printf(" %.0f ", a[i]);
			printf("}");
	}
	printf("\n\n\n\n\n 输出成功! 已经自动返回到了菜单喔：\n\n\n\n\n");
}