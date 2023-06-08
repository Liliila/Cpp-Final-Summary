#include<stdio.h>
int main()

{
    int a;
//定义整型
    printf("请输入一个整数0——9：\n");
    scanf("%d", &a);
//键盘输入，输出    
    switch (a)
    {
    case 0:
        printf("zero");break;
    case 1:
        printf("one");break;
    case 2:
        printf("two");break;
    case 3:
        printf("three");break;
    case 4:
        printf("four");break;
    case 5:
        printf("five");break;
    case 6:
        printf("six");break;
    case 7:
        printf("seven");break;
    case 8:
        printf("eight");break;
    case 9:
        printf("nine\n");break;

    default:
        printf("error!\n");break;
    }
    return 0;
}//LHF期中作业