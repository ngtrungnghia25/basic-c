//Bài 6 chương 1
#include <stdio.h>

int main() {
    char c;

    printf("Nhap vao 1 ky tu: ");
    scanf("%c", &c); //Nhập vào ký tự 

    printf("Ma ascii cua '%c' la %d\n", c, c);
    printf("Ky tu tiep theo la: %c", (int)c + 1);

    return 0;
}