#include<stdio.h>
int main()
{
    float a,b;//定义小数
    double pi=3.141592;
    int s,r=3.5;//易错点 int定义整数

    a=3+2-5*0;//为a赋值
    b=3.0/2+5/3.0;//赋值
    s=pi*r*r;

    printf("s=%d\n",s);//输出整数
    printf("a=%f,b=%f\n",a,b);//输出小数 默认后六位

    return 0;
}//LHF  修改后验证了解浮点数