#include<stdio.h>

int main() {
    // int i = 0;

    // do {
    //     printf("Nilai i = %d\n", i);
    //     i++;
    // } while (i < 3);

    // int target = 7;
    // int tebakan;

    // printf("Selamat datang di permainan tebak angka.\n");

    // do {
    //     printf("Tebak angka (1-10): ");
    //     scanf("%d", &tebakan);
        
    //     if (tebakan < target) {
    //         printf("Tebakan anda terlalu rendah.\n");
    //     } else if (tebakan > target) {
    //         printf("Tebakan anda terlalu tinggi.\n");
    //     } else {
    //         printf("Selamat, anda berhasil menebak angka!\n");
    //         return 0;
    //     }
    // } while (tebakan != target);

    int menu;
    char pilihan;

    printf("Selamat datang pemesanan makanan.\n");

    do {
        printf("Pilih makanan:\n");
        printf("1. Nasi Goreng.\n");
        printf("2. Mie Ayam.\n");
        printf("plilih menu: ");
        scanf("%d", &menu);
        getchar();

        if (menu == 1) {
            printf("Anda memesan nasi goreng.\n");
        } else if(menu == 2) {
            printf("Anda memesan mie ayam.\n");
        }

        printf("Apakah anda akan lanjut memesan?. (y/t): ");
        scanf("%c", &pilihan);
        getchar();
    } while (pilihan != 't');
    
    return 0;
}