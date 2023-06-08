#include <stdio.h>
int main()
{
    double a, c, b;
    char d;  
//定义双精度浮点数与字符  
    printf("请输入两个数和一个运算符（形如 1 + 2）：\n");    
    scanf("%lf %c %lf", &a, &d, &c);    
//键盘输入，输出    
    switch(d)    
    {        
        case '+':c = a + b;            
        printf("%.2lf + %.2lf = %.2lf", a, b, c);break;        
        case '-':c = a - b;            
        printf("%.2lf - %.2lf = %.2lf", a, b, c);break;        
        case '*':c = a * b;            
        printf("%.2lf * %.2lf = %.2lf", a, b, c);break;        
        case '/':            
        if(b == 0)           
         {                
            printf("错误：除数不能为0！");            
            }            
         else            
         {                
            c = a / b;                
         printf("%.2lf / %.2lf = %.2lf", a, b, c);            
         }            
         break;       
        default:printf("错误：无效的运算符！");    
    }    
          return 0;
}//LHF期中作业