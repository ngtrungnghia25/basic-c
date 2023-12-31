/*
BÀI 12 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int day, month, year;
    int max_day = 31; //Ngày lớn nhất trong tháng

    printf("Nhập vào ngày tháng năm: ");
    scanf("%d%d%d", &day, &month, &year);
    
    if (month == 2) //Nếu tháng là tháng 2
    {
        max_day = year % 4 == 0 ? 29 : 28; //Ngày lớn nhất trong tháng là 29 nếu là năm nhuận (chia hết cho 4), ngược lại là 28
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) //Nếu khác tháng 2 và = 4, 6, 9, 11 thì ngày lớn nhất là 30
    {
        max_day = 30;
    }
    
    if (day > max_day) //Nếu ngày vừa nhập lớn hơn ngày tối đa trong tháng thì không hợp lệ
    {
        printf("Ngày vừa nhập không hợp lệ!");
    }
    else
    {
        printf("Ngày vừa nhập hợp lệ!");
    }

    return 0;
}