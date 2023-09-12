/*
BÀI 7 - CHƯƠNG 3
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    float R1, R2, R3, R;

    printf("Nhập vào điện trở R1 R2 R3: ");
    scanf("%f%f%f", &R1, &R2, &R3); //Nhập vào điện trở R1 R2 R3

    R = 1/(1/R1 + 1/R2 + 1/R3); // Tính R

    printf("Điện trở tương đương là: %.2f", R); //In R
    
    return 0;
}