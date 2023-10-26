/*
BÀI 1 - CHƯƠNG 8
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt
#include <string.h>

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    char chuoi[255];
    printf("Nhập vào chuổi ký tự: ");
    gets(chuoi);

    for(int i = 0; i < strlen(chuoi); i++)
		printf("%d ",chuoi[i]);
    return 0;
}