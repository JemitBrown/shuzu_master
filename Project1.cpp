#include<bits/stdc++.h>
using namespace std;
void shuru(int n);
void shuchu(int n);
void shengxu(int n);
void charu(int n);
void delete1(int n);
void findm(int n);
void jiaohuan(int n);
int i, j;
double a[100];
int r;
int main(void)
{
    int choice, n;
    while (1) {
        printf("\t\t\t\t丨=================================================丨\n");
        printf("\t\t\t\t丨作者：Jemit 班级：softwear：2101                  丨\n");
        printf("\t\t\t\t丨请输入您的选择（0 - 7）                          丨\n");
        printf("\t\t\t\t丨① 输入数组元素 （该程序只可以使用整形一维数组 ）丨\n");
        printf("\t\t\t\t丨② 输出数组元素                                  丨\n");
        printf("\t\t\t\t丨③ 数组升序输出                                  丨\n");
        printf("\t\t\t\t丨④ 插入数组元素                                  丨\n");
        printf("\t\t\t\t丨⑤ 删除数组元素                                  丨\n");
        printf("\t\t\t\t丨⑥寻找数组最大值                                 丨\n");
        printf("\t\t\t\t丨⑦交换数组元素                                   丨\n");
        printf("\t\t\t\t丨0 退出程序                                       丨\n");
        printf("\t\t\t\t丨Thanks: Su_Wheal       &      Zhao          丨\n");
        printf("\t\t\t\t丨=================================================丨\n");
        scanf_s("%d", &choice);//输入选择


        switch (choice) {
        case 1:
            printf("请输入你的数组元素: 目前该程序只能使用整形变量的一维数组,确定开始后输入随机数字再按回车。");
            scanf_s("%d", &n);
            shuru(n);
            break;

            case 2:
                 shuchu(n);
                 break;
                      case 3:
                        shengxu(n);
                          break;
                          case 4:
                          charu(n);
                               break;
                                  case 5:
                                      delete1(n);
                                      n--;
                                      break;
                                  case 6:
                                      findm(n);
                                      break;
                                  case 7:
                                      jiaohuan(n);
                                       break;
        case 0:
            printf("退出程序\n");
            printf("程序结束\n");
            exit(0);
        default:
            printf("请重新输入\n");

        }
    }

    return 0;
}

void shuchu_shuzu(int n)
{
}
