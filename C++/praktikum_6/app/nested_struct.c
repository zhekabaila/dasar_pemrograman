#include <stdio.h>
#include <string.h>

typedef struct {
    char jalan[100];
    char kecamatan[100];
    char kabupaten[100];
    int kodePos;
} Alamat;

typedef struct {
    char nama[50];
    char kelas;
    int umur;
    Alamat alamat;
} Mahasiswa;

int main() {
    Mahasiswa mahasiswa1 = {
        "Zheka Baila Arkan",
        'A',
        18,
        {
            "Jl. Gunung Sari",
            "Kec. Pekalongan",
            "Kabupaten Pekalongan",
            61115
        }
    };

    printf("\nNama mahasiswa: %s\n", mahasiswa1.nama);
    printf("kelas mahasiswa: %c\n", mahasiswa1.kelas);
    printf("umur mahasiswa: %d\n", mahasiswa1.umur);
    printf("Alamat jalan mahasiswa: %s\n", mahasiswa1.alamat.jalan);
    printf("Alamat kecamatan mahasiswa: %s\n", mahasiswa1.alamat.kecamatan);
    printf("Alamat kabupaten mahasiswa: %s\n", mahasiswa1.alamat.kabupaten);
    printf("Alamat kode pos mahasiswa: %d\n", mahasiswa1.alamat.kodePos);

    return 0;
}