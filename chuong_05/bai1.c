/*
BÀI 1 - CHƯƠNG 5
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int MAX(int a, int b)
{
    return a > b ? a : b;
}

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int a, b, c;

    printf("Nhập vào a b c: ");
    scanf("%d%d%d", &a, &b, &c);
    
    printf("Số lớn nhất là: %d", MAX(MAX(a, b), c));

    return 0;
}