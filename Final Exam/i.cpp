#include<stdio.h>
int main()
{
    int x,m,n;
    printf("请输入行数：");
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
        for(x=1;x<=2*m-1;x++)
        {
            printf(" *");
            }
            printf(" \n");
            }
    return 0;
}//LHF期末考试