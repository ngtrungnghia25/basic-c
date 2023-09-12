/*
BÀI 14 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    char c;

    printf("Nhập vào 1 ký tự: ");
    scanf("%c", &c);

    switch (c)
    {
    case 'A':
        printf("10");
        break;
    case 'B':
        printf("11");
        break; 
    case 'C':
        printf("12");
        break;
    case 'D':
        printf("13");
        break;   
    case 'E':
        printf("14");
        break;
    case 'F':
        printf("15");
        break;
    default:
        printf("Hệ thập lục phân không dùng ký số này");
        break;
    }

    return 0;
}