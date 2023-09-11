/*
BÀI 9 - CHƯƠNG 4
*/
#include <stdio.h>
#include <Windows.h> //Dùng để hiển thị tiếng việt

int main() {
    SetConsoleOutputCP(65001); //Dùng để hiển thị tiếng việt

    int keo = 2, bao = 1, bua = 0;
    int player1, player2;

    printf("Quy tắc: Búa = 0 , Bao = 1, Kéo = 2\n");

    printf("Người chơi 1: ");
    scanf("%d", &player1);

    printf("Người chơi 2: ");
    scanf("%d", &player2);

    switch (player1)
    {
    case 0: // Người chơi 1 ra búa
        switch (player2)
        {
        case 0: // Người chơi 2 ra búa
            printf("2 người chơi hoà nhau");
            break;
        case 1: // Người chơi 2 ra bao
            printf("Người chơi 2 chiến thắng");
            break;
        case 2: // Người chơi 2 ra kéo
            printf("Người chơi 1 chiến thắng");
            break;
        }
        break;
    case 1: // Người chơi 1 ra bao
        switch (player2)
        {
        case 0: // Người chơi 2 ra búa
            printf("Người chơi 1 chiến thắng");
            break;
        case 1: // Người chơi 2 ra bao
            printf("2 người chơi hoà nhau");
            break;
        case 2: // Người chơi 2 ra kéo
            printf("Người chơi 2 chiến thắng");
            break;
        }
        break;
    case 2: // Người chơi 1 ra kéo
        switch (player2)
        {
        case 0: // Người chơi 2 ra búa
            printf("Người chơi 2 chiến thắng");
            break;
        case 1: // Người chơi 2 ra bao
            printf("Người chơi 1 chiến thắng");
            break;
        case 2: // Người chơi 2 ra kéo
            printf("2 người chơi hoà nhau");
            break;
        }
        break;
    }
    
    return 0;
}