#include <iostream>

// 定義 Power 函式來計算 x 的 n 次方
double Power(double x, int n) {
    double result = 1.0;

    // 判斷 n 是否為負數
    bool isNegative = n < 0;
    n = std::abs(n);  // 將 n 轉成正數以方便處理

    // 計算 x 的 n 次方
    for (int i = 0; i < n; ++i) {
        result *= x;
    }

    // 如果 n 是負數，則計算 1/x 的 n 次方
    if (isNegative) {
        result = 1.0 / result;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // 輸入基數和次方數
    std::cout << "請輸入基數 (x): ";
    std::cin >> base;

    std::cout << "請輸入次方數 (n): ";
    std::cin >> exponent;

    // 調用 Power 函式並顯示結果
    std::cout << base << " 的 " << exponent << " 次方是: " << Power(base, exponent) << std::endl;

    return 0;
}

