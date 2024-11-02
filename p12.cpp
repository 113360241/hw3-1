#include <iostream>

// 定義一個平方的函式，接收一個數字並回傳它的平方
double square(double num) {
    return num * num;
}

int main() {
    double input;

    // 輸入一個數字
    std::cout << "請輸入一個數字: ";
    std::cin >> input;

    // 調用平方函式並顯示結果
    std::cout << "該數字的平方是: " << square(input) << std::endl;

    return 0;
}
