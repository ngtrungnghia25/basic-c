/*
BÀI 13 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    char c;
    printf("Nhập vào 1 ký tự: ");
    scanf("%c", &c);
    
    int ascii_code = (int)c; //Dùng (int)c để đổi ký tự c thành mã ASCII

    if (ascii_code >= 48 && ascii_code <= 57)
    {
        printf("Ký tự vừa nhập nằm trong tập hợp 0 - 9");
    }
    else if (ascii_code >= 65 && ascii_code <= 90)
    {
        printf("Ký tự vừa nhập nằm trong tập hợp A - Z");
    }
    else if (ascii_code >= 97 && ascii_code <= 122)
    {
        printf("Ký tự vừa nhập nằm trong tập hợp a - z");
    }
    else {
        printf("Ký tự vừa nhập nằm trong tập hợp các ký tự khác");
    }
    
    return 0;
}