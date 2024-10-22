/**
 *? Buatlah program yang memiliki 3 fungsi berbeda yang masing-masing digunakan untuk
    • Menghitung luas lingkaran
    • Keliling lingkaran
    • Panjang diameter lingkaran
    Program harus menerima inputan panjang jari-jari dari pengguna, dan dapat
    menampilkan ketiga fungsi tersebut.
 */

#include<stdio.h>

float luasLingkaran(int r) {
    float phi = 3.14;
    return phi * r * r;
}

float kelilingLingkaran(int r) {
    float phi = 3.14;
    return 2 * phi * r;
}

float diameterLingkaran(int r) {
    return 2 * r;
}

void main() {
    int inputR;

    printf("Masukkan panjang jari-jari lingkaran: ");
    scanf("%d", &inputR);
    getchar();

    printf("Luas lingkaran: %.2f\n", luasLingkaran(inputR));
    printf("Keliling lingkaran: %.2f\n", kelilingLingkaran(inputR));
    printf("Diameter lingkaran: %.2f\n", diameterLingkaran(inputR));
}