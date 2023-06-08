#include <stdio.h>

int main() 
{
    float a, b, y;
    char c;

    printf("请输入两个数字和一个运算符（如：1 + 2）：\n");
    scanf("%f %c %f", &a, &c, &b);

    switch(c) 
    {
        case '+':
            y = a + b;
            break;
        case '-':
            y = a - b;
            break;
        case '*':
            y = a * b;
            break;
        case '/':
            y = a / b;
            break;
        default:
            printf("错误的运算符\n");
            return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", a, c, b, y);

    return 0;
}//LHF期末考试
