#include <stdlib.h>
#include <stdio.h>
extern int r;
extern double a[100];
void charu(int n)
{
	int e, i;
	double k;
	system("cls");
	printf("\n\n\n\n             �������Ҫ�����λ��:");
	scanf_s("%d", &e);
	printf("\n             ��������Ҫ��������֣�");
	scanf_s("%lf", &k);
	r += 1;//�����������
	while (1)
	{
		if (e > 0 && e <= (r + 1)) //�߼��ж�
		{
			for (i = r; i >= e; i--)
			{
				a[i + 1] = a[i];
			}
			a[e] = k;//����Ҫ��λ�ò��������
			break;
		}
		printf("\n            ��������ֳ���Ԫ�ظ�����Χ");
		printf("\n            ������1~β��+1֮�ڵ����֣�������ĩβ�Ӿ�����β��+1������");
		printf("\n\n\n\n             ������������ֵ�λ��Ϊ:");
		scanf_s("%d", &e);
		printf("\n             �������������ǣ�");
		scanf_s("%lf", &k);
	}
	system("cls");
	printf("\n\n         ����ɹ��������Ѿ��ص��˵���ม�\n");
}