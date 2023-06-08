#include<stdio.h>
int main()
{
    int s = 0, n = 1;
//定义并赋值整数n s
    do
    {
        s = s + n;
        n = n + 1;
    } while (n <= 100);
// do-while语句 当满足括号内条件时 循环截至 输出结果
    printf("1+2+3+.....+100=%d\n", s);//输出

    return 0;//返回
}//LHF