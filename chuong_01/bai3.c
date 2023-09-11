//Bài 3 chương 1
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, CV, S, p;

    printf("Nhap vao do dai 3 canh a b c: ");
    scanf("%f%f%f", &a, &b, &c); //Nhập vào a b c

    CV = a + b + c; //Tính chu vi
    p = CV/2; //Tính p
    S = sqrt(p*(p - a) * (p-b) * (p-c)); //Tính diện tích

    printf("Chu vi tam giac la: %.2f\n", CV); //In chu vi
    printf("Dien tich tam giac la: %.2f", S); //In diện tích
    
    return 0;
}