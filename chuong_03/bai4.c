//Bài 4 chương 1
#include <stdio.h>
#include <math.h>

int main() {
    float a, x;

    printf("Nhap vao a x: ");
    scanf("%f%f", &a, &x); //Nhập vào a x

    printf("Log a cua x la: %.2f", log(x)/log(a));

    return 0;
}