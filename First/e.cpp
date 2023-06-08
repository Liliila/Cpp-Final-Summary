#include <stdio.h>

int main()
{ 
    int x, y, z; 
    int max;

    printf("请输入三个整数："); 
    scanf("%d%d%d",&x,&y,&z);

    max=x;
    if (y>max) 
    { 
        max=y; 
    }
    if (z>max) 
    { 
        max=z;
    }
    printf("最大的数是：%d\n", max);
    
    return 0; 
}//LHF