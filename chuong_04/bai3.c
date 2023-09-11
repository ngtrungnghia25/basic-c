/*
BÀI 3 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    float a, b;

    printf("Nhập vào a b: ");
    scanf("%f%f", &a, &b);

    if (a == 0)
    {
        if (b == 0)
            printf("Phương trình vô số nghiệm");
        else 
            printf("Phương trình vô nghiệm");
    }
    else {
        printf("Phương trình có nghiệm là: %.2f", -b/a);
    }
    
    return 0;
}