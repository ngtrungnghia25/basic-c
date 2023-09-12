/*
BÀI 10 - CHƯƠNG 3
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    int i;

    printf("Nhập vào 1 số nguyên: ");
    scanf("%d", &i); //Nhập vào 1 số nguyên VD: 456

    int tram, chuc, don_vi;

    tram = (i % 10) * 100; //Hàng trăm: 456 % 10 (Chia dư 10) = 6 (Lấy 6 * 100 = 600)
    chuc = ((i % 100) / 10) *10; // Hàng chục: 456 % 100 (Chia dư 100) = 56 (Lấy 56 chia 10 = 5) lấy 5 * 10 = 50
    don_vi = i / 100; //Hàng đơn vị: 456 chia 100 = 4

    printf("%d", tram + chuc + don_vi); //Lấy hàng trăm + chục + đơn vị (600 + 50 + 4 = 654)
    
    return 0;
}