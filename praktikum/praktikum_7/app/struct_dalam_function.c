#include<stdio.h>
#include<string.h>

struct Mahasiswa {
    char nama[100];
    int umur;
};

void ubahNama(struct Mahasiswa *m, char namaPengganti[]) {
    strcpy(m->nama, namaPengganti);
}

void main() {
    struct Mahasiswa mhs1 = {
        "Zheka Baila Arkan",
        18
    };

    printf("Sebelum: \n");
    printf("Nama    :%s\n", mhs1.nama);
    printf("Umur    :%d\n\n", mhs1.umur);

    ubahNama(&mhs1, "Ristin");
    
    printf("Sesudah: \n");
    printf("Nama    :%s\n", mhs1.nama);
    printf("Umur    :%d\n\n", mhs1.umur);
}