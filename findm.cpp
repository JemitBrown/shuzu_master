#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
extern int r;
extern double a[100];
void findm(int n)
{
	int i;
	double j;
	char ch;
	if (a[1] > a[2]) j = a[1];//�ҳ����ֵ�Ҳ�Ҫ�����鱾��
	else  j = a[2];
	for (i = 1; i <= r; i++)
	{
		if (j > a[i]);
		else j = a[i];
	}
	system("cls");
printf("\n\n            ���ֵΪ��%d \n", (int)j); 
}