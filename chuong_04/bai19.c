/*
BÀI 19 - CHƯƠNG 4
*/
#include <stdio.h>
#include <math.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n;

    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);
    
    int k = 0;
    while (pow(2, k) < n) //Nếu 2 mũ K nhỏ hơn n thì tăng K lên 1 (cho tới khi 2 mũ K lớn hơn n thì dừng lại)
    {
        k++;
    }
    
    printf("K = %d", k);

    return 0;
}