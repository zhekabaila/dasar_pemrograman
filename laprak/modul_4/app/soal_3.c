#include <stdio.h>
int main() {
    int hasil, angka[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    
    printf("\n{\n");
    for (int i = 0; i < 3; i++) {
        printf("    {");
        for (int j = 0; j < 3; j++) {
            hasil += angka[i][j];
            printf("%d", angka[i][j]);
            if (j < 2) {
                printf(", ");
            }
        }
        printf("},");
        printf("\n");
    }
    printf("}\n");

    printf("\nHasil dari penjumlahan array 3x3 di atas adalah %d\n\n", hasil);
    
    return 0;
}