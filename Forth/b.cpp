#include<stdio.h>
int main()
{
    int s,n;
    s = 1;
    n = 1;

    while (n<100)
    {
        n = n + 1;
        s = s + n;
    }
    printf("1+2+....+100=%d\n", s);

    return 0;//while循环计算1-100的和
}//LHF