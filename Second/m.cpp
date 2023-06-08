#include <stdio.h>

int main() 
{
    int a, b, c;
    printf("请输入三个整数：\n");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a > b) 
    {
        int x = a;
        a = b;
        b = x;
    }
    if (a > c) 
    {
        int x = a;
        a = c;
        c = x;
    }
    if (b > c) 
    {
        int x = b;
        b = c;
        c = x;
    }
    printf("从小到大的顺序为：%d,%d,%d\n", a, b, c);
    return 0;
}//LHF
