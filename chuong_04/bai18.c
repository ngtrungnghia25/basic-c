/*
BÀI 18 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n;
    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);

    printf("Fn = { 1, 1");
    if (n <= 2)
        printf(" }", n);
    else 
    {
        int f0 = 0;
        int f1 = 1;
        int fn = 1;

        for (int i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
            printf(", %d ", fn);
        }
        printf("}");
    }

    return 0;
}