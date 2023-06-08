#include<stdio.h>
int main()
{
    int a, b, max;
//定义整数
    printf("请输入两个整数：\n");
//输出语句并换行
    scanf("%d,%d", &a, &b);
//键盘输入两个整数
        if(a>b)
        max = a;
        else
        max = b;
//条件选择
    printf("两数最大值为：%d", max);
//输出
    return 0;//返回
}//LHF