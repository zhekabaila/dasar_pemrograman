#include<stdio.h>
#include<string.h>

int main() {

    char menuMakanan[][30] = {"Nasi", "Ayam Goreng", "Ayam Bakar", "Seblak"};

    //? Memanggil menu makanan index ke-1
    printf("\n%s\n", menuMakanan[1]);

    //? Menghitunga panjang array
    int menuMakananLength = sizeof(menuMakanan) / sizeof(menuMakanan[0]);

    //? Menampilkan jummlah panjang array
    printf("Panjang array: %d\n", menuMakananLength);

    //? Mengganti menuMakanan index ke-3 menjadi "Cuanki"
    strcpy(menuMakanan[3], "Cuanki");
    printf("%s\n", menuMakanan[3]);

    //? Menampilkan semua isi menuMakanan
    for (int i = 0; i < menuMakananLength; i++) {
        printf("%d. %s\n", i + 1, menuMakanan[i]);
    }

    return 0;
}