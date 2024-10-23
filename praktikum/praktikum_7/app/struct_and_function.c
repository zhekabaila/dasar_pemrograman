#include <stdio.h>

struct Mahasiswa {
    char nama[100];
    int umur;
    long npm;
};

void tampilkanData(struct Mahasiswa m) {
    printf("Nama    : %s\n", m.nama);
    printf("umur    : %d\n", m.umur);
    printf("NPM     : %ld\n", m.npm);
}

void main() {
    struct Mahasiswa m1[] = {
        "Zheka Baila Arkan", 18, 247006111152, "Ristin Iman Andini", 18, 247006111152,
    };

    int sizeArray = sizeof(m1) / sizeof(m1[0]);

    for (int i = 0; i < sizeArray; i++) {
        tampilkanData(m1[i]);
    }
}