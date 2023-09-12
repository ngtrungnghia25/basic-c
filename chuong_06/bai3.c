/*
BÀI 3 - CHƯƠNG 6
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

    int max = a[0], min = a[0], SUM = a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i] > max) {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
        SUM += a[i];
    }

    printf("Phần tử lớn nhất của mảng là: %d\n", max);
    printf("Phần tử nhỏ nhất của mảng là: %d\n", min);
    printf("Tính tổng của các phần tử trong mảng là: %d", SUM);

    return 0;
}