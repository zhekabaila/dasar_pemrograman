#include<stdio.h>
#include<string.h>

typedef struct {
    char nama[100];
    char jabatan[100];
    char status[100];
} Pegawai;

int main() {
    Buku buku = {"Dasar-Dasar Pemrograman", "Shinta Esabella", 2021};
    
    printf("Judul Buku          : %s\n", buku.judul);
    printf("Penulis             : %s\n", buku.penulis);
    printf("Tahun Terbit        : %d\n", buku.tahunTerbit);
    return 0;
}