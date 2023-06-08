#include<stdio.h>

int main()
{
    int a, b, c, s;
    
    printf("请输入矩形的长：\n");
    scanf("%d", &a);
    printf("请输入矩形的宽：\n");
    scanf("%d", &b);
    
    c = a * 2 + b * 2;
    printf("矩形的周长为%d\n",c);
    
    s = a * b;
    printf("矩形的面积为%d\n", s);
    
    return 0;
}//LHF