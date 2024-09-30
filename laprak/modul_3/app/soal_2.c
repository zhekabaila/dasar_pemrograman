#include <stdio.h>
#include <string.h>

int main()
{
    int jumlah = 1, batas;

    printf("Masukan batas nilai > ");
    scanf("%d", &batas);
    printf("\n");

    for (int i = 1; i <= batas; i++) { 
        printf("%d + %d = %d\n", i, jumlah, jumlah + i);
        jumlah += i;
    }

    printf("\nHasil penjumlahan dari 1 hingga %d adalah %d\n", batas, jumlah);

    return 0;
}
