#include <stdio.h>
#include <string.h>  // 用於字串處理函式 strcpy 和 strlen

int main() {
    char string1[100], string2[100];  // 定義兩個字串陣列

    // 讓使用者輸入字串
    printf("請輸入一個字串: ");
    fgets(string1, sizeof(string1), stdin);  // 使用 fgets 來讀取輸入字串，包含空白字符

    // 使用 strcpy 將 string1 複製到 string2
    strcpy_s(string2, string1);

    // 使用 strlen 計算 string2 的長度（注意：這不包括 '\0' 結束字符）
    int length = strlen(string2);

    // 顯示複製的字串和它的長度
    printf("複製的字串: %s", string2);
    printf("字串的長度（不包括換行符和空字符）: %d\n", length - 1);  // 減去 '\n' 的長度

    return 0;
}

