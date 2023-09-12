/*
BÀI 24 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n, result;

    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += 2*i;
    }
    
    printf("Kết quả là: %d", result);

    return 0;
}