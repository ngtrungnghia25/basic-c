/*
BÀI 5 - CHƯƠNG 6
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int m, n;
    printf("Nhập vào số hàng và cột: ");
    scanf("%d%d", &m, &n);
    
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        printf("*** HÀNG %d *** \n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("Cột %d: ", j + 1);
            scanf("%d", &a[i][j]);
        }        
    }

    printf("\n ----- MẢNG 2 CHIỀU VỪA NHẬP LÀ -----\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }        
        printf("\n");
    }

    int num;
    printf("Nhập vào số nguyên để kiểm tra: ");
    scanf("%d", &num);    

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j] == num) 
            {
                printf("Trùng ở hàng %d cột %d\n", i + 1, j + 1);
                count++;
            }
        }        
    }
    printf("Có tất cả %d vị trí có giá trị trùng với số %d", count, num);
    
    return 0;
}