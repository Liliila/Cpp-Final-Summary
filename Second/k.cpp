#include <stdio.h>

int main() 
{
    char c;
    printf("请输入一个小写字母：");
    scanf("%c", &c);
    printf("对应的大写字母是：%c\n", c - 32);
    return 0;
}//LHF