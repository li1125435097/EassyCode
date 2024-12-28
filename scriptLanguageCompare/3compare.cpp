#include <iostream>
#include <string>
#include <thread>

void statictype(){
    int var = 10;           // 整数
    std::cout << var << std::endl;  // 输出 10

    std::string str = "Hello";      // 字符串
    std::cout << str << std::endl;  // 输出 Hello

    // 显式类型转换
    int num = 10;
    std::string strNum = std::to_string(num) + " apples";
    std::cout << strNum << std::endl;  // 输出 10 apples

    // 不允许隐式类型转换
    // int result = 10 + "5 apples"; // 编译错误
}

// 一个简单的多线程示例
void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}

void multipleThread(){
    std::thread thread1(printMessage, "Thread 1");
    std::thread thread2(printMessage, "Thread 2");

    // 等待线程完成
    thread1.join();
    thread2.join();
}

int main() {
    // 静态类型
    statictype();

    // 多现成
    multipleThread();
    return 0;
}
