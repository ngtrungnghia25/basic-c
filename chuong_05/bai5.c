/*
BÀI 5 - CHƯƠNG 5
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int GiaiThua(int n) 
{
    if (n == 0)
    {
        return 1;
    }
    else
        return n*GiaiThua(n - 1);
    
}

int ToHop(int n, int k) 
{
    return GiaiThua(n) / (GiaiThua(k) * GiaiThua(n-k));
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