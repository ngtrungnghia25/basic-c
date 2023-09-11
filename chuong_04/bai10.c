/*
BÀI 10 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int oldValue, newValue;

    printf("Nhập vào điện kế cũ: ");
    scanf("%d", &oldValue);

    printf("Nhập vào điện kế mới: ");
    scanf("%d", &newValue);

    int su_dung = newValue - oldValue;
    int vuot_dinh_muc = su_dung - 50;
    int thanh_toan = su_dung * 450;

    if (vuot_dinh_muc > 0 && vuot_dinh_muc <= 50)
    {
        thanh_toan += vuot_dinh_muc * 700;
    }
    if (vuot_dinh_muc > 50 && vuot_dinh_muc < 100)
    {
        thanh_toan += vuot_dinh_muc * 910;
    }
    if (su_dung >= 100)
    {
        thanh_toan += vuot_dinh_muc * 1200;
    }
    
    printf("Số tiền trả trong mức định mức là: %d\n", su_dung * 450);
    printf("Số tiền trả vượt định mức là: %d\n", thanh_toan - (su_dung * 450));
    printf("Số tiền phải trả là: %d đồng", thanh_toan + 1000);

    return 0;
}