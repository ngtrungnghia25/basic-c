/*
BÀI 3 - CHƯƠNG 5
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

void printChar(char c, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int a, b, c, d, e;

    printf("Nhập vào 5 số nguyên: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    printChar('a', a);
    printChar('b', b);
    printChar('c', c);
    printChar('d', d);
    printChar('e', e);

    return 0;
}