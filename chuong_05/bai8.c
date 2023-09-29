/*
BÀI 8 - CHƯƠNG 5
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int Fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return Fib(n - 1) + Fib(n - 2);
    }
    
}

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    for (int i = 1; i < 10; i++)
    {
        printf("%d ", Fib(i));
    }

    return 0;
}