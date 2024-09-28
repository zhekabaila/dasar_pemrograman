#include <stdio.h>
#include <string.h>

int main()
{
    int jumlah, batas;

    printf("Masukan batas nilai: ");
    scanf("%d", &batas);

    for (int i = 1; i <= batas; i++) {
        jumlah += i;
    }

    printf("\nHasil penjumlahan dari 1 hingga %d adalah %d\n", batas, jumlah);

    return 0;
}
