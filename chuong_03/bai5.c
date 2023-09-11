//Bài 5 chương 1
#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2;
    float he_so_goc, khoang_cach;

    printf("Nhap vao toa do x1 y1: ");
    scanf("%f%f", &x1, &y1); //Nhập vào x1 và y1
    printf("Nhap vao toa do x2 y2: ");
    scanf("%f%f", &x2, &y2); //Nhập vào x2 y2

    he_so_goc = (y2 - y1)/(x2-x1); // Tính hệ số góc
    khoang_cach = sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1)); //Tính khoảng cách

    printf("He so goc la: %.2f\n", he_so_goc); // In hệ số góc
    printf("Khoang cach la: %.2f", khoang_cach); //In khoảng cách

    return 0;
}