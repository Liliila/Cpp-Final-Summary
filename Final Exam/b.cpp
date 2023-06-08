#include<stdio.h>

int main() {
    float r, s, c;
    printf("请输入圆的半径：");
    scanf("%f", &r);
    if(r>=0)
    {
        s = 3.14 * r * r;
        c = 2 * 3.14 * r;
        printf("圆的面积为：%f\n", s);
        printf("圆的周长为：%f\n", c);
    }
    else
    {
        printf("请输入正确半径");
    }
    return 0;
}//LHF期末考试
