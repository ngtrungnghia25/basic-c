/*
BÀI 2 - CHƯƠNG 3
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    const float Pi = 3.14;
    float r, CV, S;

    printf("Nhập vào bán kính R: ");
    scanf("%f", &r); //Nhập vào bán kính r

    CV = 2*Pi*r; //Tính chu vi
    S = Pi*r*r; //Tính diện tích

    printf("Chu vi hình tròn là: %.2f\n", CV); //In chu vi
    printf("Diện tích hình tròn là: %.2f", S); //In diện tích
    
    return 0;
}