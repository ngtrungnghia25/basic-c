//Bài 2 chương 1
#include <stdio.h>

int main() {
    const float Pi = 3.14;
    float r, CV, S;

    printf("Nhap vao ban kinh r: ");
    scanf("%f", &r); //Nhập vào đường kính r

    CV = 2*Pi*r; //Tính chu vi
    S = Pi*r*r; //Tính diện tích

    printf("Chu vi hinh tron la: %.2f\n", CV); //In chu vi
    printf("Dien tich hinh tron la: %.2f", S); //In diện tích
    
    return 0;
}