/*
BÀI 5 - CHƯƠNG 3
*/
#include <stdio.h>
#include <math.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    float x1, x2, y1, y2;
    float he_so_goc, khoang_cach;

    printf("Nhập vào toạ độ x1 y1: ");
    scanf("%f%f", &x1, &y1); //Nhập vào x1 và y1
    printf("Nhập vào toạ độ x2 y2: ");
    scanf("%f%f", &x2, &y2); //Nhập vào x2 y2

    he_so_goc = (y2 - y1)/(x2-x1); // Tính hệ số góc
    khoang_cach = sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1)); //Tính khoảng cách

    printf("Hệ số góc là: %.2f\n", he_so_goc); // In hệ số góc
    printf("Khoảng cách là: %.2f", khoang_cach); //In khoảng cách

    return 0;
}