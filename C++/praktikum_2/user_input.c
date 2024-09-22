#include <stdio.h>

int main() {
    char fullName[100];
    char npm[10];
    char kelas;
    char tanggal_lahir[100];

    printf("Masukkan Nama: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Masukkan NPM: ");
    scanf("%s", npm);

    printf("Masukkan Kelas: ");
    scanf("%c", kelas);
    getchar();getchar();

    printf("Masukkan Tanggal Lahir (dd-mm-yyyy): ");
    scanf("%s", tanggal_lahir);

    printf("Nama : %s\n", fullName);
    printf("NPM : %s\n", npm);
    printf("Tanggal Lahir : %s\n", tanggal_lahir);
    printf("Kelas : %c\n", kelas);
    

    return 0;
}