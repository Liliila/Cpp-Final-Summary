#include <stdio.h>

int main() 
{
    int a, b = 0, c = 0, zero = 0;
    printf("请输入10个整数：\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &a);
        if (a > 0) 
        {
            b++;
        } 
        else if (a < 0) 
        {
            c++;
        } 
        else 
        {
            zero++;
        }
    }
    
    printf("正数个数：%d\n负数个数：%d\n零的个数：%d\n", b, c, zero);
    return 0;
}//LHF期末考试