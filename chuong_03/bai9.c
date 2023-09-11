//Bài 9 chương 1
#include <stdio.h>

int main() {
    int day, month, year;

    printf("Nhap vao ngay thang nam: ");
    scanf("%d%d%d", &day, &month, &year); //Nhập vào ngày tháng năm

    printf("%d/%d/%d", day, month, year); //In ra màn hình
    
    return 0;
}