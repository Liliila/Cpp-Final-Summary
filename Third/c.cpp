#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, p, x, x1, x2;
//定义浮点数
    printf("请输入“a=?,b=?,c=?”\n");
    scanf("a=%f,b=%f,c=%f", &a, &b, &c);
//输入数值
    p = sqrt(b * b - 4 * a * c);
    x = -b / (2 * a);
    x1 = (-b + p) / (2 * a);
    x2 = (-b - p) / (2 * a);
//运算
    if(p>=0)
       { if(p==0)
            printf("该方程只有一个实数解,该方程实数解为x=%6.2f\n", x);

         else
            printf("该方程有两个实数解,该方程两个解分别x1=%6.2f,x2=%6.2f\n", x1, x2);
       }
     else

        printf("该方程无实数解\n");
//循环选择输出
    return 0;
}//LHF