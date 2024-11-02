#include <stdio.h>  // 用於標準輸入輸出
#include <math.h>   // 用於數學函式，例如 sqrt

int main() {
    double number, result;

    // 讓使用者輸入一個數字
    printf("請輸入一個數字: ");
    scanf_s("%lf", &number);

    // 使用 sqrt 函式來計算平方根
    if (number < 0) {
        printf("無法計算負數的平方根。\n");
    }
    else {
        result = sqrt(number);
        printf("%.2lf 的平方根是: %.2lf\n", number, result);
    }

    return 0;
}

