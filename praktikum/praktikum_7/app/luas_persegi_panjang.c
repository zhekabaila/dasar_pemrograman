#include <stdio.h>

typedef struct{
    int p, l, hasil;
} LuasPersegi;

int hitungLuas(int panjang, int lebar) {
    return panjang * lebar;
}

int main() {
    LuasPersegi Luas;

    Luas.p = 5;
    Luas.l = 6;
    Luas.hasil = hitungLuas(Luas.p, Luas.l);

    printf("Luas persegi panjang adalah : %d\n", Luas.hasil);

    return 0;
}