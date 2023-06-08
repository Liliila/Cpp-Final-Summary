#include <stdio.h>

int main() 
{
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("0到%d间的偶数有：\n", n);
    for (int i = 0; i <= n; i += 2) 
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}//LHF