#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[50];
    char kelas;
    int umur;
} Mahasiswa;

int main() {
    Mahasiswa mahasiswa1;

    printf("Masukan nama mahasiswa > ");
    fgets(mahasiswa1.nama, sizeof(mahasiswa1.nama), stdin);
    mahasiswa1.nama[strlen(mahasiswa1.nama) - 1] = '\0';
    
    printf("Masukan kelas mahasiswa > ");
    scanf("%c", &mahasiswa1.kelas);
    getchar();

    printf("Masukan umur mahasiswa > ");
    scanf("%d", &mahasiswa1.umur);
    getchar();

    printf("\nNama mahasiswa: %s\n", mahasiswa1.nama);
    printf("kelas mahasiswa: %c\n", mahasiswa1.kelas);
    printf("umur mahasiswa: %d\n", mahasiswa1.umur);

    return 0;
}