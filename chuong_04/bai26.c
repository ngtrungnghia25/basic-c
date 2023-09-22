/*
BÀI 26 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    int n;

    printf("Nhập vào số nguyên dương n: ");
    scanf("%d", &n);

    printf("Các số nguyên tố nhỏ hơn hoặc bằng %d là: ", n);
    for (int i = 3; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            printf("%d ", i);
            break;
        }    
    }
    
    return 0;
}