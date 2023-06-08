#include <stdio.h>

int main() 
{
    char a;

    printf("请输入字母等级：\n");
    scanf("%c", &a);

    switch (a) 
    {
        case 'A':
            printf("成绩范围为60~69分\n");
            break;
        case 'B':
            printf("成绩范围为70~79分\n");
            break;
        case 'C':
            printf("成绩范围为80~89分\n");
            break;
        case 'D':
            printf("成绩范围为90~100分\n");
            break;
        default:
            printf("成绩范围为60分以下\n");
            break;
    }

    return 0;
}//LHF