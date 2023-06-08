#include <stdio.h>

int main() 
{
    int a;
    printf("键盘输入一个数，判断该数大于或小于100\n");
    scanf("%d", &a);
    if (a >= 100) 
    {
        printf("%d大于等于100\n",a);
    } 
    else 
    {
        printf("%d小于100\n",a);
    }
    return 0;
}//LHF