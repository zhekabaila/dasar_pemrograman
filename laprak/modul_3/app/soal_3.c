#include <stdio.h>
#include <string.h>

int main()
{
    int jumlah = 1, batas;
    float average;

    printf("Masukan batas nilai: ");
    scanf("%d", &batas);

    for (int i = 1; i <= batas; i++) {
        jumlah += i;
    }

    average = (float)jumlah / batas;

    printf("\nHasil penjumlahan dari 1 hingga %d adalah: %d\n", batas, jumlah);
    printf("Rata-rata nilai adalah: %.2f%%\n", average);

    return 0;
}
