#include <stdio.h>
#include <string.h>

int main() {
    //! 1
    // int x =20;
    // int y = 18;

    // if (x > y){
    //     printf("%d is greater than %d\n", x, y);
    // }

    //! 2
    // int PIN;
    // printf("Enter your PIN: ");
    // scanf("%d", &PIN);
    // getchar();

    // if (PIN == 1234) {
    //     printf("PIN yang anda masukan benar! \n");
    //     printf("PIN anda %d \n", PIN);
    // }  else {
    //     printf("PIN yang anda masukan salah! \n");
    // }

    //! 3
    // char prodi[40] = "Informatika";

    // if (strcmp(prodi, "Informatika") == 0) { //? Untuk mengecek apakah pengkondisian berhasil atau true.
    //     printf("Selamat datang di Informatika");
    // }

    //! 4
    // int jam = 20;
    // if (jam < 18) {
    //     printf("Selamat siang \n");
    // } else {
    //     printf("Selamat malam \n");
    // }

    //! Latihan 1 
    int tahun;
    printf("Masukkan tahun: ");

    scanf("%d", &tahun);
    getchar();

    //? Tahun kabisat adalah tahun yang habis dibagi 4 dan tidak habis dibagi 100.
    //? kecuali habis dibagi 400.

    if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0) {
        printf("%d adalah tahun kabisat \n", tahun);
    } else {
        printf("%d bukan tahun kabisat \n", tahun);
    }
}