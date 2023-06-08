#include <stdio.h>

int main() 
{
    int sum = 0;
    for (int i = 2; i <= 100; i += 2) 
    {
        sum += i;
    }
    printf("2+4+...+100=%d\n", sum);
    return 0;
}//LHF