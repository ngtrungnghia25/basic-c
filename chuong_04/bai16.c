/*
BÀI 16 - CHƯƠNG 4
*/
#include <stdio.h>
#include <math.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n;
    printf("Nhập vào N: ");
    scanf("%d", &n);
    
    //Câu a
    int S_a = 0;
    for (int i = 1; i <= n; i++)
    {
        S_a += i;
    }
    //Câu b
    float S_b = 0;
    for (int i = 1; i <= n; i++)
    {
        S_b += (float) i/(i+1);
    }
    //Câu c
    float S_c = 0;
    for (int i = 1; i <= n; i++)
    {
        S_c += pow(-1, i) * i; // pow(-1, i) là -1 mũ i
    }

    printf("a: %d\n", S_a);
    printf("b: %.2f\n", S_b);
    printf("c: %.2f", S_c);

    return 0;
}