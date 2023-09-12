/*
BÀI 6 - CHƯƠNG 3
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    char c;

    printf("Nhập vào 1 ký tự: ");
    scanf("%c", &c); //Nhập vào ký tự 

    printf("Mã ASCII của '%c' là %d\n", c, c);
    printf("Ký tự tiếp theo là: %c", (int)c + 1);

    return 0;
}