#include<stdio.h>
int main()
{
    int n, i;
    
    printf("请输入一个整数：\n");
    scanf("%d", &n);

    for (i = 2; i < n;i++)           
    {
        if(n%i==0)//条件取余为0跳出
        break;
    }
    if(i<n)//条件选择
        printf("%d不是素数\n", n);
    else
        printf("%d是素数", n);

    return 0;
}//LHF