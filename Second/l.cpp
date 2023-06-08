#include <stdio.h>

int main() {
    char c;
    printf("请输入一个英文字母：");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }
    printf("转换后的字母为：%c", c);
    return 0;
}//LHF