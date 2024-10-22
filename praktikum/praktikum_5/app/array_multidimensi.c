#include<stdio.h>
#include<string.h>

int main() {
    int angka[2][3][4];

    int dimensiPertama = sizeof(angka) / sizeof(angka[0]);
    int dimensiKedua = sizeof(angka[0]) / sizeof(angka[0][0]);
    int dimensiKetiga = sizeof(angka[0][0]) / sizeof(angka[0][0][0]);

    for (int i = 0; i < dimensiPertama; i++)
    {
        for (int j = 0; j < dimensiKedua; j++) {
            for (int k = 0; k < dimensiKetiga; k++) {
                printf("Masukkan angka ke [%d][%d][%d]: ", i, j, k);
                scanf("%d", &angka[i][j][k]);
            }
        }
    }
    
    printf("\nNilai yang dimasukan oleh pengguna: ");
    printf("\n{\n");
    for (int i = 0; i < dimensiPertama; i++) {
        printf("    {");
        for (int j = 0; j < dimensiKedua; j++) {
            printf("    {");
            for (int k = 0; k < dimensiKedua; k++) {
                printf("%d", angka[i][j][k]);
                if (j < 3) {
                    printf(", ");
                }
            }
            printf("},");
            printf("\n");
        }
        printf("},");
        printf("\n");
    }
    printf("}\n");

    return 0;
}