/*
BÀI 8 - CHƯƠNG 3
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt
    
    float Toan, Ly, Hoa, Trung_binh;

    printf("Nhập vào điểm Toán Lý Hoá: ");
    scanf("%f%f%f", &Toan, &Ly, &Hoa); //Nhập vào điểm toán lý hoá

    Trung_binh = (Toan + Ly + Hoa)/3; //Tính trung bình

    printf("Điểm trung bình là: %.2f", Trung_binh); //In trung bình
    
    return 0;
}