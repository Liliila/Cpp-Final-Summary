#include <stdio.h>
int main() 

{
    char c;
//定义字符
    printf("请输入一个字符：");
    scanf("%c", &c);
//键盘输入，输出
    if (c >= '0' && c <= '9') 
    {
        printf("%c是数字\n", c);
    } 
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
    {
        printf("%c是英文字母\n", c);
    }
    else
    {
        printf("%c是其他字符\n", c);
    }
//条件选择，输出
    return 0;
}//LHF期中作业
