#include<stdio.h>
int main()
{
    char a,b;//字符
    short a1,b1;//
    int x,y;//整数
    long x1,y1;

    a=127;b=129;/*赋值*/
    a1=32767,b1=-32789;
    x=2147483647;y=2147483649;
    x1=2147483647L;y1=2147483649L;

    printf("a=%d,a1=%u,b=%d,b1=%u\n",a,a1,b,b1);//输出
    printf("x=%d,x1=%ld,y=%d,y1=%ld\n",x,x1,y,y1);

    getchar();//停留

}//LHF