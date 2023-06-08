#include<stdio.h>
int main()
{
    int n = 100, i, j, k;
//定义
    do
    {
        i = n / 100;//百位
        j = (n / 10) % 10;//十位
        k = n % 10;//个位
        if(n==i*i*i+j*j*j+k*k*k)
            printf("%d是水仙数量,满足%d=%d^3+%d^3+%d^3\n", n, n, i, j, k);
        n = n + 1;
    } 
    while (n<=999);
//do-while语句 条件循环 公式执行 满足while条件跳出
    return 0;//返回
}
/*这里使用了一个do-while循环，循环变量i从100开始逐个增加到999，
每次循环都将其分解为百位、十位和个位数字，并判断其是否为水仙花数，
如果是则输出该数。需要注意的是，由于do-while循环至少会执行一次，
因此循环变量i的初始值应该为100而非0。*/

//LHF