//Bài 8 chương 1
#include <stdio.h>

int main() {
    float Toan, Ly, Hoa, Trung_binh;

    printf("Nhap vao dien tro Toan Ly Hoa: ");
    scanf("%f%f%f", &Toan, &Ly, &Hoa); //Nhập vào điểm toán lý hoá

    Trung_binh = (Toan + Ly + Hoa)/3; //Tính trung bình

    printf("Diem trung binh la: %.2f", Trung_binh); //In trung bình
    
    return 0;
}