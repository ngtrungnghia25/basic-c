/*
BÀI 9 - CHƯƠNG 6
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    int n;
    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);
    
    int a[n];
    //NHẬP VÀO MẢNG GỒM n PHẦN TỬ
    for (int i = 0; i < n; i++)
    {
        printf("Số nguyên thứ %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Các phần tử mảng trước khi đảo là: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    //ĐẢO MẢNG
    for (int i = 0; i < n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("\nCác phần tử mảng sau khi đảo là: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}