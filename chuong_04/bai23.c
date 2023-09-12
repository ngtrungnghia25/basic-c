/*
BÀI 23 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int S, N = 1;

    printf("Nhập vào số nguyên dương S: ");
    scanf("%d", &S);
    
    float Sum = 0;

    while(Sum < S)
    {
        Sum += (float) 1/N;
        N++;
    }
    
    printf("N = %d", N - 1);
    
    return 0;
}