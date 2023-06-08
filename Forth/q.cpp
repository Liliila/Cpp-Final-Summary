#include <stdio.h>

int main() 
{
    int n = 10, i;
    int fib[10] = {0, 1};

    for (i = 2; i < n; i++) 
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (i = 0; i < n; i++) 
    {
        printf("%d ", fib[i]);
    }

    return 0;
}//LHF