#include <stdio.h>
#include <string.h>

int main() {
    // int tingkat;

    // printf("Masukan UKT Tingakat: ");
    // scanf("%d", &tingkat);
    // getchar();
    
    // switch (tingkat) {
    // case 1:
    //     printf("Biaya Rp. 1.000.000 . \n");
    //     break;
    // case 2:
    //     printf("Biaya Rp. 1.500.000 . \n");
    //     break;
    // case 3:
    //     printf("Biaya Rp. 2.000.000 . \n");
    //     break;
    // case 4:
    //     printf("Biaya Rp. 2.500.000 . \n");
    //     break;
    // case 5:
    //     printf("Biaya Rp. 3.000.000 . \n");
    //     break;
    // default:
    //     printf("input tidak valid. \n");
    //     break;
    // }

    int menu, jumlah, totalHarga, diskon, totalAkhir;

    printf("=========================================\n");
    printf("Daftar Manu: \n");
    printf("1. Selak Pedas - Rp. 20.000: \n");
    printf("2. Selak Tulang - Rp. 15.000: \n");
    printf("3. Cilok Goang - Rp. 10.000: \n");
    printf("4. Baso Aci - Rp. 30.000: \n");
    printf("=========================================\n");

    printf("Pilih Menu: ");
    scanf("%d", &menu);
    getchar();

    printf("Masukan Jumlah: ");
    scanf("%d", &menu);
    getchar();

    switch (menu)
    {
    case 1:
        totalHarga = 20000 * jumlah;
        if (totalHarga >= 500000) {
            diskon = 0.10;
        } else if (totalHarga >= 100000) {
            diskon = 0.20;
        }

        totalAkhir = totalHarga * diskon;
        break;
    case 2:
        totalHarga = 15000 * jumlah;
        if (totalHarga >= 500000) {
            diskon = 0.10;
        } else if (totalHarga >= 100000) {
            diskon = 0.20;
        }

        totalAkhir = totalHarga * diskon;
        break;
    
    default:
        break;
    }
}