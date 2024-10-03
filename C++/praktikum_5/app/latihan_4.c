#include <stdio.h>

int main() {
    int angka[3][5] = {
        {999, 865, 232, 934, 222},
        {234, 364, 782, 996, 552},
        {333, 222, 555, 888, 777}
    };

    int angkaTerbesar = angka[0][0], barisTerbesar = 0, kolomTerbesar = 0;
    int angkaTerkecil = angka[0][0], barisTerkecil = 0, kolomTerkecil = 0;

    int panjangDimensiPertama = sizeof(angka) / sizeof(angka[0]);
    int panjangDimensiKedua = sizeof(angka[0]) / sizeof(angka[0][0]);

    for (int i = 0; i < panjangDimensiPertama; i++)
    {
        for (int j = 0; j < panjangDimensiKedua; j++)
        {
            if (angka[i][j] > angkaTerbesar) {
                angkaTerbesar = angka[i][j];
                barisTerbesar = i;
                kolomTerbesar = j;
            }

            if (angka[i][j] < angkaTerkecil) {
                angkaTerkecil = angka[i][j];
                barisTerkecil = i;
                kolomTerkecil = j;
            }
        }
    }

    printf("Angka terkecil dari array adalah %d, pada baris ke %d, kolom ke %d\n", angkaTerkecil, barisTerkecil, kolomTerkecil);
    printf("Angka terbesar dari array adalah %d, pada baris ke %d, kolom ke %d\n", angkaTerbesar, barisTerbesar, kolomTerbesar);

    return 0;
}