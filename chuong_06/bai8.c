/*
BÀI 8 - CHƯƠNG 6
*/
#include <stdio.h>
#include <math.h>
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

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            sum += a[i] * a[i]; //Tính bình phương sau đó cộng vào biến sum
        }
    }

    printf("Tổng bình phương các số âm trong mảng là: %d", sum);

    return 0;
}