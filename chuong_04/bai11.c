/*
BÀI 11 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int hour, minute, second;

    printf("Nhập vào giờ phút giây: ");
    scanf("%d%d%d", &hour, &minute, &second);

    int plus;
    printf("Nhập vào số giây muốn cộng thêm: ");
    scanf("%d", &plus);

    if (second + plus < 60)
    {
        second += plus;
    }
    else 
    {
        minute += (second + plus) / 60;
        second = (second + plus) % 60;
        if (minute >= 60)
        {
            hour += minute / 60;
            minute %= 60;
        }
        
    }
    printf("%d:%d:%d", hour, minute, second);

    return 0;
}