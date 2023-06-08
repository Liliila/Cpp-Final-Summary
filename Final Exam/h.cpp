#include <stdio.h>

int main() 
{
    int a = 0;
    for (int i = 1; i <= 1000; i++) 
    {
        if (i % 2 == 1) 
        {
            a += i;
        }
    }
    printf("1-1000所有的奇数和为：%d\n", a);
    return 0;
}//LHF期末考试