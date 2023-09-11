/*
BÀI 4 - CHƯƠNG 4
*/
#include <stdio.h>
#include <math.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    float a, b, c, d;

    printf("Nhập vào a b c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d < 0)
    {
        printf("Phương trình vô nghiệm");
    } else if (d == 0)
    {
        printf("Phương trình có nghiệm duy nhất là: %.2f", -b/(2*a));
    }
    else {
        printf("Phương trình có 2 nghiệm phân biệt\n");
        printf("x1 = %.2f\n", (-b - sqrt(d)) / (2*a));
        printf("x2 = %.2f", (-b + sqrt(d)) / (2*a));
    }

    return 0;
}