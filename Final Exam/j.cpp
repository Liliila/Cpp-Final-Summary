#include <stdio.h>

int main() 
{
    char str[100];
    int i, daxie = 0, xiaoxie = 0, qita = 0;

    printf("请输入一行字符：\n");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            daxie++;
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            xiaoxie++;
        } 
        else 
        {
            qita++;
        }
    }

    printf("大写字母个数：%d\n", daxie);
    printf("小写字母个数：%d\n", xiaoxie);
    printf("其他字符个数：%d\n", qita);

    return 0;
}//LHF期末作业