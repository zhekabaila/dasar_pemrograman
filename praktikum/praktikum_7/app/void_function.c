#include <stdio.h>

typedef struct{
    int p, l, hasil;
} LuasPersegi;

void hitungLuas(int panjang, int lebar) {
    int result =  panjang * lebar;

    printf("Luas persegi panjang adalah: %d\n", result);
}

int main() {
    LuasPersegi Luas;

    Luas.p = 5;
    Luas.l = 6;
    hitungLuas(Luas.p, Luas.l);

    return 0;
}