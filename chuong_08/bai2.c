/*
BÀI 2 - CHƯƠNG 8
*/
#include <stdio.h>
#include <string.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    char chuoi[255];
    printf("Nhập vào chuổi ký tự: ");
    gets(chuoi);

    printf("Chuỗi đảo ngược là: ");
    for(int i = strlen(chuoi) - 1; i >= 0 ; i--)
		printf("%c", chuoi[i]);

    return 0;
}