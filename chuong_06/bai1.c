/*
BÀI 1 - CHƯƠNG 6
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n;
    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Số nguyên thứ %d: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mảng sau khi sắp xếp giảm dần là: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}