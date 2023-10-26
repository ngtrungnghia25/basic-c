/*
BÀI 3 - CHƯƠNG 8
*/
#include <stdio.h>
#include <string.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int KiemTraDoiXung(char str[])
{
    for(int i = 0; i < strlen(str) / 2; i++){
        if(str[i] == str[strlen(str) - i - 1]){
            return 1;
        }
    }
    return 0;
}

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    char str[255];
    printf("Nhập vào chuổi ký tự: ");
    gets(str);

    printf("Chuỗi vừa nhập %s", KiemTraDoiXung(str) == 1 ? "đối xứng" : "không đối xứng");
    return 0;
}