#include<stdio.h>
int main()
{
    long f1 = 1, f2 = 2, f3;
    int i;

    printf("%-9ld%-9ld", f1, f2);
    for (i = 3; i <= 30;i++)
    {
        f3 = f1 + f2;
        printf("%-9ld", f3);
        f1 = f2;
        f2 = f3;
        if(i%5==0)
            printf("\n");
    }

    return 0;
}//LHF