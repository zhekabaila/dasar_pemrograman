#include <stdio.h>
#include <string.h>

int main()
{
    char kodeBarang;
    int jumlahBarang, hargaBarang, totalHarga, totalBayar, hasilDiskon;
    float besarDiskon = 0;
    
    printf("Masukan Kode Barang (A/B)   : ");
    scanf("%c", &kodeBarang);
    getchar();

    if (kodeBarang != 'A' && kodeBarang != 'B') {
        printf("Maaf, Kode Barang %c Tidak Tersedia! \n", kodeBarang);
        
        return 0;
    }
    
    printf("Masukan Jumlah Barang       : ");
    scanf("%d", &jumlahBarang);
    getchar();

    if (jumlahBarang > 10) {
        besarDiskon = kodeBarang == 'A' ? 0.05 : 0.025;
    }

    switch (kodeBarang) {
        case 'A':
            hargaBarang = 500;
            totalHarga = hargaBarang * jumlahBarang;
            hasilDiskon = totalHarga * besarDiskon;
            totalBayar = totalHarga - hasilDiskon;
        break;
        case 'B':
            hargaBarang = 500;
            totalHarga = hargaBarang * jumlahBarang;
            hasilDiskon = totalHarga * besarDiskon;
            totalBayar = totalHarga - hasilDiskon;
        break;
    }
    
    printf("\n=======================================\n");
    printf("Harga Barang %c              : Rp %d\n", kodeBarang, hargaBarang);
    printf("Jumlah Barang               : %d\n", jumlahBarang);
    printf("Total Belanja               : Rp %d\n", totalHarga);
    if (jumlahBarang > 10) {
        printf("Diskon                      : %.1f%% \n", besarDiskon * 100);
        printf("Total Diskon                : Rp %d\n", hasilDiskon);
    }
    printf("---------------------------------------\n");
    printf("Total Bayar                 : Rp %d\n", totalBayar);
    printf("=======================================\n");

    return 0;
}
