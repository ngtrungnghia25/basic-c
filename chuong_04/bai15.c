/*
BÀI 15 - CHƯƠNG 4
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

    if (day + 1 <= max_day) //Nếu ngày đã nhập + 1 nhỏ hơn bằng ngày lớn nhất
    {
        day++; //Ngày đã nhập + 1
    }
    else //Ngược lại
    {
        day = 1; //(Qua tháng sau) ngày bằng 1
        month ++; //Tháng cộng thêm 1
        if (month > 12) //Nếu tháng cộng thêm 1 mà lớn hơn 12
        {
            month = 1; //Tháng = 1 (Qua năm sau)
            year++; //Năm + 1
        }
    }

    printf("Ngày mai là: %d/%d/%d", day, month, year);
    
    return 0;
}