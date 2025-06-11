#include <iostream>

int main() {
    int n;
    std::cin >> n;  // 从输入读取n

    // 处理边界情况（n为0或负数）
    if (n < 0) {
        std::cout << "Error: n must be non-negative." << std::endl;
        return 1;
    }

    unsigned long long factorial = 1;  // 使用大整数类型防止溢出
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << factorial << std::endl;  // 输出n!
    return 0;
}
