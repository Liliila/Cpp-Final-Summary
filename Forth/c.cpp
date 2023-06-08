#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, num, sum = 0;
    srand(time(NULL)); // 设置随机数种子
    for (i = 0; i < 10; i++) {
        num = rand() % 100; // 生成0-99之间的随机数
        printf("%d ", num); // 输出随机数
        if (num % 2 == 1) { // 判断是否为奇数
            sum += num; // 累加奇数和
        }
    }
    printf("\n奇数和为：%d\n", sum); // 输出奇数和
    return 0;
}//LHF