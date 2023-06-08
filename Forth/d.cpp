#include<stdio.h>
int main()
{
    int n = 0;
    int temp = 0;
    int f1 = 1;
    int f2 = 1;
//定义整型函数
    printf("请输入n的值:\n");
    scanf("%d", &n);
//键盘输入输出
    while (f2<n)
    {
        temp = f2;
        f2 = f1 + f2;
        f1 = temp;
    }

    printf("%d范围内最大的Fibonacci数是%d\n", n, f1);

    return 0;
}//LHF  