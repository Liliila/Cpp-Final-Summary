#include<stdio.h>
int main()
{
    int n=1;//定义并赋值整数n=1
    float x = 1, t = 1, s = 0;//定义并赋值单精度浮点数xts
    
    while (t>=1e-6)//while循环 满足括号内条件时大括号内公式循环执行
    {
        t = 1.0 / (2 * n - 1);
        s = s + x * t;
        x = (-1) * x;
        n = n + 1;
    }
    printf("1-1/3+1/5-1/7+...=%f\n", s);//输出
    
    return 0;//返回
}//LHF