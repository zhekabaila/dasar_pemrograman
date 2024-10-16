#include<stdio.h>
#include<string.h>

typedef struct {
    char judul[100];
    char penulis[100];
    int tahunTerbit;
} Buku;

int main() {
    Buku buku = {"Dasar-Dasar Pemrograman", "Shinta Esabella", 2021};
    
    printf("Judul Buku          : %s\n", buku.judul);
    printf("Penulis             : %s\n", buku.penulis);
    printf("Tahun Terbit        : %d\n", buku.tahunTerbit);
    return 0;
}