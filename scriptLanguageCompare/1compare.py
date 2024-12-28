# Python性能测试（使用time模块）
import time

def add(a, b):
    return a + b

def simple():
    result = add(3, 4)
    print("The sum is:", result)

def performance():
    start_time = time.time()
    for i in range(10000000):
        pass
    end_time = time.time()
    print("Python执行时间：", end_time - start_time, "秒")

if __name__ == "__main__":
    # 简单加和示范
    simple()

    # 性能测试示范
    performance()