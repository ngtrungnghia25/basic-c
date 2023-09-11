/*
BÀI 2 - CHƯƠNG 4
*/
#include <stdio.h>
#include <math.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int a, b, c;

    printf("Nhập vào độ dài 3 cạnh: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Không tạo thành tam giác");
        return 0;
    }

    float ChuVi, DienTich, p;

    ChuVi = a + b + c;
    p = ChuVi/2;
    DienTich = sqrt(p*(p-a)*(p-b)*(p-c));

    printf("Chu vi tam giác là: %.2f\n", ChuVi);
    printf("Diện tích tam giác là: %.2f", DienTich);

    return 0;
}