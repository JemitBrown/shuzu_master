#include <stdlib.h>
#include <stdio.h>
extern double a[100];
extern int r;
extern int i;
void shengxu(int n)
{
    int i, j, y{};
    double c;
    system("cls");
    {
        for (i = 1; i <= r; i++)//ÆøÅÝÅÅÐò
            for (j = 1; j <= r - i; j++)
            {
                if (a[j] < a[j + 1]);
                else
                {
                    c = a[j + 1]; a[j + 1] = a[j]; a[j] = c;

                }
            }  
        for (i = 1; i <= r; i++)
                printf("%lf \n", a[i]);
    }
}