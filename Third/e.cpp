#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d,%d", &a, &b);
    if(a<=b)
        a = a;
    else
        a = b;

    printf("两个数的较小值为%d\n", a);
    return 0;
}//LHF