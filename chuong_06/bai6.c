/*
BÀI 6 - CHƯƠNG 6
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int m, n;
    printf("Nhập vào số hàng và cột: ");    
    scanf("%d%d", &m, &n);

    int a[m][n];

    //Nhập vào ma trận
    printf("Nhập vào ma trận %dx%d\n", m, n);   
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //Chuyển vị ma trận -> lưu vào 1 ma trận mới
    int new_array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            new_array[i][j] = a[j][i];
        }
    }
    
    //In ma trận ra màn hình
    printf("----- Ma trận sau khi chuyển vị -----\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", new_array[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
/*
a[0][0] a[0][1] a[0][2]
a[1][0] a[1][1] a[1][2]

=> Chuyen Vi
a[0][0] a[1][0]
a[0][1] a[1][1]
a[0][2] a[1][2]

*/