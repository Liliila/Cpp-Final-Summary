#include <stdio.h>

int main() 
{
    int n = 10; // 假设n为10
    int i = 1; // 记录当前括号内的值
    int s = 0; // 记录总和
    while (n > 0) 
    {
        s += i * (i + 1) / 2; // 计算当前括号内的值并加到s中
        i++; // 更新当前括号内的值
        n--; // 更新n的值
    }
    printf("s = %d\n", s); // 输出结果
    return 0;
}//LHF