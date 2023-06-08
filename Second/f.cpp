#include<stdio.h>
int main()
{
    int a = 13, b = 6, c = 7, result = 2;
    //定义并赋值
    printf("%d\n", a >= b);//判定ab关系并输出真假
    printf("%d\n", a == b + c);//判断a与b+c关系---
    printf("%d\n", result=a>b<c);//-----------
    
    return 0;
}//LHF 修改验证输出 熟悉关系表达式