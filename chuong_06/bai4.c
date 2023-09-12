/*
BÀI 4 - CHƯƠNG 6
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n;
    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);
    
    int a[n + 1];
    //NHẬP VÀO MẢNG GỒM n PHẦN TỬ TĂNG DẦN
    for (int i = 0; i < n; i++)
    {
        printf("Số nguyên thứ %d: ", i);
        scanf("%d", &a[i]);
        if (i == 0)
        {
            continue; 
        }
        if (a[i] < a[i-1])
        {
            i--;
        } 
    }
    
    int insert;
    printf("Nhập vào 1 số nguyên muốn chèn: ");
    scanf("%d", &insert);
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= insert && a[i+1] >= insert)
        {
            for (int j = n + 1; j > i; j--)
            {
                a[j] = a[j-1];
            }
            a[i + 1] = insert;
            break;
        }
    }
    
    printf("Mảng sau khi chèn là: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}