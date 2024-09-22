#include <stdio.h>
#include <string.h>

int main() {

    char nilai = 'C';
    
    printf("Nilai %d \n", nilai == 'C'); //? Benar atai 1

    char prodi[50] = "Universitas Siliwangi";
    //? Jika nilai positif (+), maka string 1 lebih kecil dari 2
    //? Jika nilai negatif (-), maka string 2 lebih kecil dari 1
    printf("%d \n", strcmp(prodi, "Unper"));

    return 0;
}