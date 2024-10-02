#include <stdio.h>
int main() {
    int angka[9] = {135, 165, 1, 16, 511, 65, 654, 169, 4}; 
    int angkaTerbesar = angka[0];

    for (int i = 0; i < 9; i++)
    {
        if (angka[i] > angkaTerbesar) {
            angkaTerbesar = angka[i];
        }
    }

    printf("Angka terbesar dari array adalah %d\n", angkaTerbesar);

    return 0;
}