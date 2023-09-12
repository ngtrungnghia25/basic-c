/*
BÀI 9 - CHƯƠNG 3
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    int day, month, year;

    printf("Nhập vào ngày tháng năm: ");
    scanf("%d%d%d", &day, &month, &year); //Nhập vào ngày tháng năm

    printf("%d/%d/%d", day, month, year); //In ra màn hình
    
    return 0;
}