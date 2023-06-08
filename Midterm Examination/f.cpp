#include<stdio.h>
int main()
{
    char c;
//定义字符
    printf("请输入一个字符：\n");
    scanf("%c", &c);
//键盘输入，输出
    if(c>='A'&&c<='Z')
    {
        printf("%c", c+32);
    }
    if(c>='a'&&c<='z')
    {
        printf("%c", c - 32);
    }
    if(c<=64&&c>=91&&c<=96&&c>=123)
    {
        printf("%c", c);
    }
//条件选择输出
    return 0;
}//LHF期中作业