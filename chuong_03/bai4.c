/*
BÀI 4 - CHƯƠNG 3
*/
#include <stdio.h>
#include <math.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    float a, x;

    printf("Nhập vào a x: ");
    scanf("%f%f", &a, &x); //Nhập vào a x

    printf("Log a của x là: %.2f", log(x)/log(a));

    return 0;
}