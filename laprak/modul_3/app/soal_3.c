#include <stdio.h>

int main()
{
    int jumlah = 1, batas;
    float average;

    printf("Masukan batas nilai > ");
    scanf("%d", &batas);
    printf("\n");

    for (int i = 1; i <= batas; i++) { 
        printf("%d + %d = %d\n", i, jumlah, jumlah + i);
        jumlah += i;
    }

    average = (float)jumlah / batas;

    printf("\nHasil penjumlahan dari 1 hingga %d adalah %d", batas, jumlah);
    printf("\nRata-rata hasil dari penjumlahan 1 hingga %d adalah %.2f%%\n", batas, average);

    return 0;
}
