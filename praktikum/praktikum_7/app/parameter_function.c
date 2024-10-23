#include<stdio.h>

void data_diri(char nama[], int umur){
    printf("saya %s umur saya %d\n", nama, umur);
}

void main() {
    data_diri("Daspri", 20);
    data_diri("Asep", 19);
    data_diri("Jajang", 21);
}