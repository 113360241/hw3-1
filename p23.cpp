#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDice() {
    // 擲兩顆骰子
    int die1 = (std::rand() % 6) + 1;  // 骰子1的點數
    int die2 = (std::rand() % 6) + 1;  // 骰子2的點數
    return die1 + die2;  // 返回總和
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));  // 設置隨機數種子

    int sum = rollDice();  // 初次擲骰子
    std::cout << "玩家第一次擲骰子總和是: " << sum << std::endl;

    // 檢查贏或輸的條件
    if (sum == 7 || sum == 11) {
        std::cout << "恭喜！你贏了！" << std::endl;
    }
    else if (sum == 2 || sum == 3 || sum == 12) {
        std::cout << "抱歉！你輸了！" << std::endl;
    }
    else {
        int myPoint = sum;  // 設定目標點數
        std::cout << "你的目標點數是: " << myPoint << std::endl;

        // 繼續擲骰子直到達到目標點數或擲出 7
        while (true) {
            sum = rollDice();
            std::cout << "玩家再次擲骰子總和是: " << sum << std::endl;

            if (sum == myPoint) {
                std::cout << "恭喜！你贏了！" << std::endl;
                break;  // 贏了，跳出迴圈
            }
            else if (sum == 7) {
                std::cout << "抱歉！你輸了！" << std::endl;
                break;  // 輸了，跳出迴圈
            }
        }
    }

    return 0;
}
