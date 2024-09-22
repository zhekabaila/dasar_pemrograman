#include <stdio.h>
// #include <string.h>

int main()
{
    char kodeBarang[16], namaBarang[100], satuan[10];
    int jumlahBeli, hargaBeli, totalHarga, potongan = 0, totalBayar;
    float besarPotongan = 0;

    printf("Masukan Kode Barang     : ");
    scanf("%s", kodeBarang);
    getchar();

    printf("Masukan Nama Barang     : ");
    fgets(namaBarang, sizeof(namaBarang), stdin);

    printf("Masukan Harga Beli      : ");
    scanf("%d", &hargaBeli);
    getchar();

    printf("Masukan Jumlah Beli     : ");
    scanf("%d", &jumlahBeli);
    getchar();

    printf("Masukan Satuan          : ");
    scanf("%s", satuan);
    getchar();

    totalHarga = hargaBeli * jumlahBeli;

    if (totalHarga > 100000) {
        besarPotongan = 0.10;
        potongan = totalHarga * besarPotongan;
    }

    totalBayar = totalHarga - potongan;

    printf("\n\n--------------------------------------------\n");
    printf("MINI MARKET SERBA ADA\n");
    printf("--------------------------------------------\n");
    printf("Kode Barang     : %s\n", kodeBarang);
    printf("Nama Barang     : %s", namaBarang);
    printf("--------------------------------------------\n");
    printf("Harga Barang    : Rp %d/%s\n", hargaBeli, satuan);
    printf("Jumlah Beli     : %d\n", jumlahBeli);
    printf("--------------------------------------------\n");
    printf("Total Harga     : Rp %d\n", totalHarga);
    printf("--------------------------------------------\n");
    printf("Potongan        : %.0f%%\n", besarPotongan * 100);
    printf("Total Potongan  : Rp %d\n", potongan);
    printf("Total Bayar     : Rp %d\n", totalBayar);
    printf("--------------------------------------------\n");

    return 0;
}