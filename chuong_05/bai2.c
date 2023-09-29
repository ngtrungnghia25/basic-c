/*
BÀI 2 - CHƯƠNG 5
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int UCLN(int a, int b) {
    int u = a < b ? a : b;
    while (a % u != 0 || b % u != 0)
    {
        u--;
    }
    return u;
}

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int tu, mau;

    printf("Nhập vào 2 số tử và mẫu: ");
    scanf("%d%d", &tu, &mau);
    
    printf("Phân số này %s tối giản", UCLN(tu, mau) == 1 ? "đã" : "chưa");
    
    return 0;
}