#include<stdio.h>
int main()
{
    int s = 0, n;
    for (s = 0, n = 1; n < 100; n++)
        s = s + n;
    printf("1+2+3+...+100=%d\n", s);

    return 0;
}//LHF