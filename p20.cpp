#include <iostream>
#include <cstdlib>  // 用於 rand() 函式
#include <ctime>    // 用於 time() 函式，設定隨機數種子

int main() {
    // 使用 time() 函式設定隨機數種子，以便每次執行程式時隨機數不同
    std::srand(static_cast<unsigned int>(std::time(0)));

    // 擲骰子，產生 1 到 6 之間的隨機數
    int dice = (std::rand() % 6) + 1;

    // 顯示擲骰子的結果
    std::cout << "擲骰子的結果是: " << dice << std::endl;

    return 0;
}
