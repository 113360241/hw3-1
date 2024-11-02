#include <iostream>

// 定義 Max 函式來找出三個整數的最大值
int Max(int a, int b, int c) {
    int maxVal = a;  // 假設 a 是最大值

    // 比較 b 是否比 maxVal 大
    if (b > maxVal) {
        maxVal = b;
    }

    // 比較 c 是否比 maxVal 大
    if (c > maxVal) {
        maxVal = c;
    }

    return maxVal;
}

int main() {
    int num1, num2, num3;

    // 輸入三個整數
    std::cout << "請輸入三個整數: ";
    std::cin >> num1 >> num2 >> num3;

    // 調用 Max 函式並顯示結果
    std::cout << "三個整數中的最大值是: " << Max(num1, num2, num3) << std::endl;

    return 0;
}

