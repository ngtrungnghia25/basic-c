/*
BÀI 20 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n, tmp;

    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);

    int result = 0;

    while(n > 0)
    {
        tmp = n % 10;
        result = result * 10 + tmp;
        n = n / 10;
    }

    printf("Số đảo ngược là %d", result);

    return 0;
}