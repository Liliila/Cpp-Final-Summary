#include<stdio.h>
int main()
{
    int x, y;//定义整型变量x,y
    float z;//定义单精度浮点型变量z

    x = 3.4;//给x赋值为3.4
    y = 'a';//给y赋值为ASCII码表中的a
    z = 12;//给z赋值为十进制12

    printf("x=%d,y=%d,y=%c,z=%f\n", x, y, y, z);//输出整数x，y；输出y的字符形式；输出十进制z并默认保留小数点后六位

    getchar();//将控制台停留
}//LHF 依据ASCII码表修改 运行输出 修改后可截图两次 不做要求 