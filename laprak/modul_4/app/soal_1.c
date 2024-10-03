#include <stdio.h>

int main() {
    int angka[5] = {1, 2, 3, 4, 5}; 
    int angkaTerbesar = angka[0], angkaTerkecil = angka[0];

    int angkaLength = sizeof(angka) / sizeof(angka[0]);

    for (int i = 0; i < angkaLength; i++)
    {
        if (angka[i] > angkaTerbesar) {
            angkaTerbesar = angka[i];
        }

        if (angka[i] < angkaTerkecil) {
            angkaTerkecil = angka[i];
        }
    }

    printf("\n{");
    for (int i = 0; i < angkaLength; i++)
    {
        printf("%d", angka[i]);

        if (i < 4) {
            printf(", ");
        }
    }
    printf("}\n\n");

    printf("Angka terbesar dari array adalah %d\n", angkaTerbesar);
    printf("Angka terkecil dari array adalah %d\n\n", angkaTerkecil);

    return 0;
}