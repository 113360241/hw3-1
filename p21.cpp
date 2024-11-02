#include <iostream>
#include <cstdlib>  // 用於 rand() 和 srand() 函式

int main() {
    unsigned seed;  // 定義一個 unsigned 整數作為隨機數生成器的種子

    // 讓使用者輸入隨機數種子
    std::cout << "請輸入一個隨機數種子 (unsigned 整數): ";
    std::cin >> seed;

    // 設定隨機數生成器的種子
    std::srand(seed);

    // 擲骰子，產生 1 到 6 之間的隨機數
    int dice = (std::rand() % 6) + 1;

    // 顯示擲骰子的結果
    std::cout << "擲骰子的結果是: " << dice << std::endl;

    return 0;
}
