/*
BÀI 17 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int n;

    printf("Nhập vào số nguyên n: ");
    scanf("%d", &n);

    int max, index; //Tạo biến max để lưu giá trị lớn nhất, index để lưu vị trí của số lớn nhất
    for (int i = 0; i < n; i++)
    {
        int temp; //Tạo biến để lưu lại 1 số
        printf("Số thứ %d: ", i); 
        scanf("%d", &temp); //Nhập vào số

        if (i == 0 || temp > max) //Nếu số nhập vào lớn hơn số lớn nhất
        {
            index = i;
            max = temp;
        }
    }

    printf("Số lớn nhất là: %d\n", max);
    printf("Vị trí số lớn nhất là: %d", index);
    
    return 0;
}