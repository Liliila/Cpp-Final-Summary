#include<stdio.h>
int main()
{
    int a,b;
    printf("键盘输入两个数，用“，”分隔开，输出调换位置\n");
    scanf("%d,%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}//LHF