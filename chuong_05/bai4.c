/*
BÀI 4 - CHƯƠNG 5
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int SumCharNumber(int i) {
    int sum = 0;
    while (i / 10 > 0)
    {
        sum += i % 10;
        i/=10;
    }
    return sum + i;
}

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n;
    printf("Nhập vào 1 số nguyên: ");
    scanf("%d", &n);
    
    printf("Số này %s chia hết cho 3", SumCharNumber(n) % 3 == 0 ? "có" : "không");
    
    return 0;
}