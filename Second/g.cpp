#include<stdio.h>
int main()
{
    int x = 9, y = 5, z = 4;
    //定义并赋值
    printf("%d\n", !2 - 1 || 2 < x && 3 != y);
    printf("%d\n", (x + y) && !z - 4 && 4 % z);
    //判断关系并输出
    return 0;
}//LHF 例题2.7 逻辑运算符演示熟悉