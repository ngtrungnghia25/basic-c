/*
BÀI 2 - CHƯƠNG 5
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int UCLN(int a, int b) {
    int min = a < b ? a : b;
    int UCLN = 1;
    for (int i = 2; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            UCLN = i;
        }
    }
    return UCLN;
}

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int tu, mau;

    printf("Nhập vào 2 số tử và mẫu: ");
    scanf("%d%d", &tu, &mau);
    
    printf("Phân số này %s tối giản", UCLN(tu, mau) == 1 ? "đã" : "chưa");
    
    return 0;
}