#include <stdio.h>

int main() 
{
    int a, b, c, d = 0;
    printf("请输入一个3位数：");
    scanf("%d", &a);
    b = a;

    while (b != 0) 
    {
        c = b % 10;
        d += c * c * c;
        b /= 10;
    }

    if (d == a) 
    {
        printf("%d是水仙花数", a);
    } 
    else 
    {
        printf("%d不是水仙花数", a);
    }

    return 0;
}//LHF