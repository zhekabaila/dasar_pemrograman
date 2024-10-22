#include<stdio.h>
#include<string.h>

int main() {

    char nama[20];

    printf("Masukan nama: %s", nama);
    fgets(nama, sizeof(nama), stdin);
    nama[strlen(nama) - 1] = '\0';

    for (int i = 0; i < strlen(nama); i++)
    {
        if ((nama[i] == 'a' || nama[i] == 'A') || (nama[i] == 'i' || nama[i] == 'I') || (nama[i] == 'u' || nama[i] == 'U') || (nama[i] == 'e' || nama[i] == 'E') || (nama[i] == 'o' || nama[i] == 'O')) {
            printf("%c - adalah huruf vokal\n", nama[i]);
        } else if (nama[i] == ' ') {
            printf("%c - adalah spasi\n", nama[i]);
        } else {
            printf("%c - adalah huruf konsonan\n", nama[i]);
        }
    }

    return 0;
}