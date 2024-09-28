#include <stdio.h>
#include <string.h>

int main()
{
    int percobaan = 1, inputPin, pin = 5555;

    printf("\n========== Selamat Datang di ATM Zheka ==========\n");

    do {
        printf("Silahkan masukan PIN anda: ");
        scanf("%d", &inputPin);
        getchar();

        if (inputPin == pin) {
            printf("Selamat datang, anda berhasil login!\n");
            return 0;
        }
        
        printf("PIN yang anda masukan salah. Silahkan coba lagi.\n\n");

        if (percobaan >= 3) {
            printf("PIN anda teleh diblokir.\n");
        }

        percobaan++;
    } while (percobaan <= 3);
    
    return 0;
}
