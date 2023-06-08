#include <stdio.h>

int main() 
{
    int a = 0;
    for (int i = 2; i <= 200; i++) 
    {
        int b = 1;
        for (int j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                b = 0;
                break;
            }
        }
        if (b) 
        {
            printf("%d ", i);
            a++;
            if (a % 5 == 0) 
            {
                printf("\n");
            }
        }
    }
    return 0;
}//LHF期末考试
