/*
BÀI 7 - CHƯƠNG 6
*/
#include <stdio.h>
#include <math.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int mu(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else 
    {
        return pow(x, n) + mu(x, n-1);
    }
}

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n, x;

    printf("%d ", mu(2, 1));

    return 0;
}