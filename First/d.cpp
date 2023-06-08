#include<stdio.h>
int max(int x,int y)
{
    int z;
    if(x<y)
    {
        z=x;
    }
    else
    {
        z=y;
    }
    return z;
}
int main()
{
    int a,b,c;
    
    printf("请输入两个整数：\n");
    scanf("%d,%d",&a,&b);

    c=max(a,b);
    printf("%d,%d,最小值为：%d\n",a,b,c);
    return 0;
}//LHF