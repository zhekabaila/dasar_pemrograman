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
    char hobby[100];
    char agama[100];
    int umur;
    Alamat alamat;
} Manusia;

int main() {
    Manusia manusia1;

    printf("Masukan nama manusia > ");
    fgets(manusia1.nama, sizeof(manusia1.nama), stdin);
    manusia1.nama[strlen(manusia1.nama) - 1] = '\0';
    
    printf("Masukan hobby manusia > ");
    fgets(manusia1.hobby, sizeof(manusia1.hobby), stdin);
    manusia1.hobby[strlen(manusia1.hobby) - 1] = '\0';

    printf("Masukan agama manusia > ");
    fgets(manusia1.agama, sizeof(manusia1.agama), stdin);
    manusia1.agama[strlen(manusia1.agama) - 1] = '\0';

    printf("Masukan umur manusia > ");
    scanf("%d", &manusia1.umur);
    getchar();

    printf("Masukan alamat jalan > ");
    fgets(manusia1.alamat.jalan, sizeof(manusia1.alamat.jalan), stdin);
    manusia1.alamat.jalan[strlen(manusia1.alamat.jalan) - 1] = '\0';

    printf("Masukan alamat kecamatan > ");
    fgets(manusia1.alamat.kecamatan, sizeof(manusia1.alamat.kecamatan), stdin);
    manusia1.alamat.kecamatan[strlen(manusia1.alamat.kecamatan) - 1] = '\0';

    printf("Masukan alamat kabupaten > ");
    fgets(manusia1.alamat.kabupaten, sizeof(manusia1.alamat.kabupaten), stdin);
    manusia1.alamat.kabupaten[strlen(manusia1.alamat.kabupaten) - 1] = '\0';

    printf("Masukan alamat kode pos > ");
    scanf("%d", &manusia1.alamat.kodePos);
    getchar();

    printf("\nNama: %s\n", manusia1.nama);
    printf("Hobby: %s\n", manusia1.hobby);
    printf("Agama: %s\n", manusia1.agama);
    printf("Umur: %d\n", manusia1.umur);
    printf("Alamat jalan: %s\n", manusia1.alamat.jalan);
    printf("Alamat kecamatan: %s\n", manusia1.alamat.kecamatan);
    printf("Alamat kabupaten: %s\n", manusia1.alamat.kabupaten);
    printf("Alamat kode pos: %d\n", manusia1.alamat.kodePos);

    return 0;
}