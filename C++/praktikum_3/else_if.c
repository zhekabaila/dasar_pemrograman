#include <stdio.h>
#include <string.h>

int main() {
    // int jam = 17;

    // if (jam  < 10) {
    //     printf("Selamat pagi!. \n");
    // } else if (jam < 17) {
    //     printf("Selamat siang!. \n");
    // } else if (jam < 18) {
    //     printf("Selamat sore!. \n");
    // } else {
    //     printf("Selamat malam!. \n");
    // }

    //! Latihan 2
    int umur;

    printf("Masukan umur anda: ");
    scanf("%d", &umur);
    getchar();
    
    if (umur < 5) {
        printf("Tiker gratis.\n");
    } else if (umur < 13) {
        printf("Tiket anak-anak, Rp. 20.0000.\n");
    }  else if (umur < 60) {
        printf("Tiket dewasa, Rp. 50.000.\n");
    } else {
        printf("Tiket lansia, Rp. 30.000.\n");
    }
}