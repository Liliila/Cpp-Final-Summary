#include <stdio.h>
int main()
{
    char sex;
    //定义字符变量
    scanf("%c", &sex);
    //键盘输入
    if (sex == 'f' || sex == 'F')//判断赋值
    {
        printf("女\n");
    }
    else if (sex == 'm' || sex == 'M')
    {
        printf("男\n");
    } 
    else
    {
        printf("输入有误\n");
    }
    return 0;  
}//LHF