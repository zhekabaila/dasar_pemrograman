#include<stdio.h>

int main() {
    int angka[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++) {
            printf("Masukkan angka ke [%d][%d]: ", i, j);
            scanf("%d", &angka[i][j]);
        }
    }
    
    printf("\nNilai yang dimasukan oleh pengguna: ");
    printf("\n{\n");
    for (int i = 0; i < 2; i++) {
        printf("    {");
        for (int j = 0; j < 3; j++) {
            printf("%d", angka[i][j]);
            if (j < 2) {
                printf(", ");
            }
        }
        printf("},");
        printf("\n");
    }
    printf("}\n");

    printf("\nHasil setelah ditransposekan: ");
    printf("\n{\n");
    for (int i = 0; i < 3; i++) {
        printf("    {");
        for (int j = 0; j < 2; j++) {
            printf("%d", angka[j][i]);

            if (j < 1) {
                printf(", ");
            }
        }
        printf("},");
        printf("\n");
    }
    printf("}\n");
    
    return 0;
}