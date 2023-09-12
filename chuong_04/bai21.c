/*
BÀI 21 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    float s = 0;
    int i = 0;
    while (1)
    {
        float tmp;

        printf("Nhập vào số thứ %d: ", i + 1);
        scanf("%f", &tmp);

        if (tmp == -1)
        {
            break;
        }
        else 
        {
            s += tmp;
            i++;
        }
    }

    printf("Trung bình các số vừa nhập là: %.2f", s/i);
    
    return 0;
}