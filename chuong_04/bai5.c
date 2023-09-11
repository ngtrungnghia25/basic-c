/*
BÀI 5 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    float a, b;
    char ch;

    printf("Nhập vào a b: ");
    scanf("%f%f", &a, &b);
    printf("Nhập vào ký tự ch: ");
    getchar();
    scanf("%c", &ch);

    if (ch == '+')
    {
        printf("a + b = %.2f", a + b);
    } else if (ch == '-')
    {
        printf("a - b = %.2f", a - b);
    } else if (ch == '*')
    {
        printf("a * b = %.2f", a * b);
    } else if (ch == '/')
    {
        printf("a / b = %.2f", a / b);
    } else {
        printf("Ký tự không hợp lệ!");
    }  

    return 0;
}