#include <stdio.h>

int main() 
{
    int a, b = 0;
    printf("请输入一个大于0的正整数：");
    scanf("%d", &a);
    while (a > 0) 
    {
        b = b * 10 + a % 10;
        a /= 10;
    }
    printf("该数的倒序形式为：%d", b);
    return 0;
}//LHF
