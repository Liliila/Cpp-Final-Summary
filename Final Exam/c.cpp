#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("请输入两个整数：\n");
    scanf("%d,%d",&a,&b);
    if(a>b)
    {
        temp=a;
    }
    else
    {
        temp=b;
    }
    
    printf("两个数中的最大值为%d",temp);
    return 0;
}//LHF期末考试