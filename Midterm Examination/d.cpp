#include<stdio.h>
int main()
{
    int x, y;
//定义整型
    printf("请输入x=？\n");
    scanf("x=%d", &x);
//键盘输入，输出
    if(x<1)
    {
        printf("y=x");
    }
    if(1<=x<10)
    {
        printf("y=%d", 2*x - 1);
    }
    if(x>=10)
    {
        printf("y=%d", 3 * x + 11);
    }
//条件选择
    return 0;
}//LHF期中作业