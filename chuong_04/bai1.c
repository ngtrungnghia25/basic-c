/*
BÀI 1 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    int a, b, c, max;

    printf("Nhập vào 3 số: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        max = a;
    } else if (b > a && b > c)
    {
        max = b;
    } else {
        max = c;
    }
    
    printf("Số lớn nhất là: %d", max);

    return 0;
}