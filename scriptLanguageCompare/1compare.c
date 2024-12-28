// C语言代码示例：计算两个数的和
#include <stdio.h>
#include <time.h>

int add(int a, int b) {
    return a + b;
}


void simple() {
    int result = add(3, 4);
    printf("The sum is: %d\n", result);
}

void performance() {
    clock_t start_time = clock();
    for (int i = 0; i < 10000000; i++) {
        // 空循环
    }
    clock_t end_time = clock();
    double time_spent = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("C语言执行时间：%f 秒\n", time_spent);
}

int main(){
    // 简单加和示范
    simple();

    // 性能测试示范
    performance();
}
