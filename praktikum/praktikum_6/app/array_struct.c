#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[50];
    char kelas;
    int umur;
} Mahasiswa;

int main() {
    Mahasiswa mahasiswa[3] = {
        {"Zheka Baila Arkan", 'A', 18},
        {"Ristin", 'A', 19},
        {"Alif", 'A', 19},
    };

    for (int i = 0; i < 3; i++)
    {
        printf("\nNama mahasiswa: %s\n", mahasiswa[i].nama);
        printf("kelas mahasiswa: %c\n", mahasiswa[i].kelas);
        printf("umur mahasiswa: %d\n", mahasiswa[i].umur);
    }
    

    return 0;
}