//Bài 7 chương 1
#include <stdio.h>

int main() {
    float R1, R2, R3, R;

    printf("Nhap vao dien tro R1 R2 R3: ");
    scanf("%f%f%f", &R1, &R2, &R3); //Nhập vào điện trở R1 R2 R3

    R = 1/(1/R1 + 1/R2 + 1/R3); // Tính R

    printf("Dien tro tuong duong la: %.2f", R); //In R
    
    return 0;
}