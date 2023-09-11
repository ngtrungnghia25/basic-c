/*
BÀI 7 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int MONEY, Month;
    
    printf("Nhập vào số tiền: ");
    scanf("%d", &MONEY);
    printf("Nhập vào số tháng: ");
    scanf("%d", &Month);

    printf("Số tiền cả vốn và lời nhận được sau %d tháng:\n", Month);
    float Lai_Khong_Thoi_Han = MONEY;
    for (int i = 0; i < Month; i++)
    {
        Lai_Khong_Thoi_Han += Lai_Khong_Thoi_Han * 0.024;
    }
    printf("Nếu gửi không kỳ hạn là: %.2f\n", Lai_Khong_Thoi_Han);
    
    float Lai_Co_Thoi_Han = MONEY;
    for (int i = 0; i < Month; i+=3)
    {
        Lai_Co_Thoi_Han += Lai_Co_Thoi_Han * 0.04;
    }
    printf("Nếu gửi có kỳ hạn là: %.2f", Lai_Co_Thoi_Han);
    
    return 0;
}