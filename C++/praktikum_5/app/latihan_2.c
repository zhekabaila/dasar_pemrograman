#include<stdio.h>
#include<string.h>

int main() {
    // char nama[3][30];

    // int namaLength = sizeof(nama) / sizeof(nama[0]);

    // for (int i = 0; i < namaLength; i++)
    // {
    //     printf("Masukkan nama ke-%d: ", i);
    //     fgets(nama[i], sizeof(nama[i]), stdin);
    //     nama[i][strlen(nama[i]) - 1] = '\0';
    // }

    // printf("\nNama yang dimasukan oleh pengguna: \n");
    // for (int i = 0; i < namaLength; i++) {
    //     printf("%d. %s\n", i+1, nama[i]);
    // }

    int angka[2][3];

    int dimensiPertama = sizeof(angka) / sizeof(angka[0]);
    int dimensiKedua = sizeof(angka[0]) / sizeof(angka[0][0]);

    for (int i = 0; i < dimensiPertama; i++)
    {
        for (int j = 0; j < dimensiKedua; j++) {
            printf("Masukkan angka ke [%d][%d]: ", i, j);
            scanf("%d", &angka[i][j]);
        }
    }
    
    printf("\nNilai yang dimasukan oleh pengguna: ");
    printf("\n{\n");
    for (int i = 0; i < dimensiPertama; i++) {
        printf("    {");
        for (int j = 0; j < dimensiKedua; j++) {
            printf("%d", angka[i][j]);
            if (j < 2) {
                printf(", ");
            }
        }
        printf("},");
        printf("\n");
    }
    printf("}\n");

    return 0;
}