#include<stdio.h>
#include<windows.h>
int main()
{
    int a;
    printf("请输入一个年份：\n");
    scanf("%d", &a);

    if((a%4==0&&a%100!=0)||(a%400==0))
    {
        printf("%d是闰年\n", a);
    }
    else
    {
        printf("%d是平年\n", a);
    }
    
    return 0;
}//LHF期中考试