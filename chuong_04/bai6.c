/*
BÀI 6 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int month, year;

    printf("Nhập vào tháng và năm: ");
    scanf("%d%d", &month, &year);

    if (month == 2)
    {
        printf("Tháng 2 năm %d có %d ngày", year, year % 4 == 0 ? 29 : 28);   
    }
    else 
    {
        int max_day_of_month = 31;
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            max_day_of_month = 30;
        }
        printf("Tháng %d năm %d có %d ngày", month, year, max_day_of_month);   
    }
    
    return 0;
}