#include<stdio.h>
int main()
{
    int a;
 //定义整型
    printf("请输入一个整数：\n");
    scanf("%d", &a);
 //键盘输入，输出
    if((a%5!=0)&&(a%7!=0))
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
//条件选择输出
    return 0;
}//LHF期中作业