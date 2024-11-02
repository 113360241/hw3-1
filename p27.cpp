#include <iostream>

// 階乘函式 (n!)
unsigned long long factorial(int n) {
    // 基本情況：如果 n 為 0 或 1，則階乘為 1
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        // 遞迴情況：n! = n * (n - 1)!
        return n * factorial(n - 1);
    }
}

int main() {
    // 計算並顯示 1 到 10 的階乘
    for (int n = 1; n <= 10; ++n) {
        unsigned long long result = factorial(n);
        std::cout << n << "! = " << result << std::endl;
    }

    return 0;
}
