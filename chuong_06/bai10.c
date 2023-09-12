/*
BÀI 10 - CHƯƠNG 6
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int m, n;
    printf("Nhập vào số hàng và cột: ");
    scanf("%d%d", &m, &n);
    
    int a[m][n];
    int b[m][n];

    printf("\n ----- MẢNG 2 CHIỀU A -----\n");
    for (int i = 0; i < m; i++)
    {
        printf("*** HÀNG %d *** \n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("Cột %d: ", j + 1);
            scanf("%d", &a[i][j]);
        }        
    }

    printf("\n ----- MẢNG 2 CHIỀU B -----\n");
    for (int i = 0; i < m; i++)
    {
        printf("*** HÀNG %d *** \n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("Cột %d: ", j + 1);
            scanf("%d", &b[i][j]);
        }        
    }

    printf("\n ----- TỔNG 2 MẢNG -----\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }        
        printf("\n");
    }

    return 0;
}