/*
BÀI 4 - CHƯƠNG 8
*/
#include <stdio.h>
#include <string.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    char str[255];
    printf("Nhập vào chuỗi ký tự: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        int count = 0;
        for (int j = i; j < strlen(str); j++)
        {
            int da_dem = 0;
            for (int k = 0; k < i; k++)
            {
                if (str[i] == str[k])
                {
                    da_dem = 1;
                }
                
            }
            if (str[i] == str[j] && da_dem == 0)
            {
                count++;
            }
        }
        if (count > 0)
            printf("Ký tự %c xuất hiện %d lần\n", str[i], count);
    }
    
    return 0;
}