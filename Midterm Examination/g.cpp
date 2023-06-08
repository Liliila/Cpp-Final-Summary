#include <stdio.h>
int main()

{
    int a, b, c, min;
//定义整型
    printf("请输入三个整数：\n");
    scanf("%d,%d,%d", &a, &b, &c);
    
    min = a; // 假设a是最小值
    if (b < min) 
    { // 如果b比a小，则说明b是最小值
        min = b;
    }
    if (c < min)
    { // 如果c比当前的最小值还要小，则说明c是最小值
        min = c;
    }
//条件选择
    printf("三个数中最小数是：%d\n", min);
    
    return 0;
}//LHF期中作业
