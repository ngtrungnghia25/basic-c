/*
BÀI 3 - CHƯƠNG 3
*/
#include <stdio.h>
#include <math.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    float a, b, c, CV, S, p;

    printf("Nhập vào độ dài 3 cạnh: ");
    scanf("%f%f%f", &a, &b, &c); //Nhập vào a b c

    CV = a + b + c; //Tính chu vi
    p = CV/2; //Tính p
    S = sqrt(p*(p - a) * (p-b) * (p-c)); //Tính diện tích

    printf("Chu vi tam giác là: %.2f\n", CV); //In chu vi
    printf("Diện tích tam giác là: %.2f", S); //In diện tích
    
    return 0;
}