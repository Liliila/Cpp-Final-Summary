#include<stdio.h>
int main()
{
    int x = 5, y = 4; 
    //定义并赋值
    printf("%d\n", x += x -= x * x);
    printf("%d\n", y += y -= y *= y);
    //计算结果并输出
    return 0;
}//LHF 例题2.9 赋值运算符演示