/*
BÀI 6 - CHƯƠNG 5
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int ToHop(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;   
    }
    else
    {
        return ToHop(n - 1, k - 1) + ToHop(n - 1, k);
    }
}

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    int n;
    printf("Nhập vào n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", ToHop(i, j));
        }
        printf("\n");
    }

    return 0;
}