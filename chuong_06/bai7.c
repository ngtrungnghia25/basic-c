/*
BÀI 7 - CHƯƠNG 6
*/
#include <stdio.h>
#include <math.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

//Hàm kiểm tra số nguyên tố
int isPrimeNumber(int num) {
    if (num <= 2)
    {
        // số nhỏ hơn 2 không phải số nguyên tố
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            // không phải số nguyên tố
            return 0;
        }
    }    
    // là số nguyên tố
    return 1;
}

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

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 1)
        {
            printf("%d ", a[i]);
            count++;
        }
    }
    printf("[Có %d số lẻ]\n", count);

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
            count++;
        }
    }
    printf("[Có %d số chẵn]\n", count);

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if(isPrimeNumber(a[i]))
        {
            printf("%d ", a[i]);
            count++;
        }
    }
    printf("[Có %d số nguyên tố]\n", count);

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if(!isPrimeNumber(a[i]))
        {
            printf("%d ", a[i]);
            count++;
        }
    }
    printf("[Có %d không phải số nguyên tố]", count);

    return 0;
}