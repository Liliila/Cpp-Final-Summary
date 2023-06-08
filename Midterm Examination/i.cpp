#include<stdio.h>
int main()
{
    int score;
    printf("请输入学生分数：\n");
    scanf("%d", &score);
    switch (score/10)
    {
    case 10:
        printf("A+\n");break;
    case 9:
        printf("A\n");break;
    case 8:
        printf("B\n");break;
    case 7:
        printf("C\n");break;
    case 6:
        printf("D\n");break;
    case 5:
        printf("E\n");break;
    case 4:
        printf("E\n");break;
    case 3:
        printf("E\n");break;
    case 2:
        printf("E\n");break;
    case 1:
        printf("E\n");break;
    case 0:
        printf("E\n");break;
    default:
        printf("输入成绩错误\n");
    }
    return 0;
}//LHF期中作业