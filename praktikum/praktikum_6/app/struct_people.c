#include<stdio.h>
#include<string.h>

struct people {
    char nama[100];
    char kelas;
    long npm;
};

int main() {
    //? CARA PERTAMA UNTUK MENGINISIALISASI NILAI PADA VARIABLE STRUCT 
    struct people people_1 = {
        "Zheka Baila",
        'A',
        247006111152
    };

    //? CARA PERTAMA UNTUK MENGINISIALISASI NILAI MENGGUNAKAN NAMA KUNCI VARIABLE PADA STRUCT 
    struct people people_2 = {
        .kelas = 'A',
        .npm = 247006111152
        .nama = "Zheka Baila",
    };

    //TODO: MEMASUKAN NILAI STRING PADA ATTRIBUTE STRUCT STRING HARUS MENGGUNAKAN `strcpy()` dan import <string.h>
    strcpy(people_1.nama, "Zheka Baila Arkan");
    people_1.kelas = 'A';
    people_1.npm = 247006111152;

    printf("Nama: %s\n", people_1.nama);
    printf("Kelas: %c\n", people_1.kelas);
    printf("NPM: %ld\n", people_1.npm);

    return 0;
}