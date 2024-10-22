#include<stdio.h>
#include<string.h>

int main() {
    char fakultas[] = "Teknik ";
    char prodi1[] = "Informatika";
    char prodi2[] = "Elektro";
    char prodi3[] = "Informatika";
    char prodi4[20];

    //? Membandingkan menggunakan strcmp()
    printf("Membandingkan prodi 1 dan prodi 2: %d\n", strcmp(prodi1, prodi2));
    printf("Membandingkan prodi 1 dan prodi 3: %d\n", strcmp(prodi1, prodi3));

    //? Mengukur panjang string menggunakan strlen()
    printf("Panjang prodi 1 adalah: %ld\n", strlen(prodi1));

    //? Menggabungkan 2 string menggunakan strcat()
    // printf("Fakultas + prodi = %s\n", strcat(fakultas, prodi1));

    //? Mengcopy prodi 1 ke prodi 4 menggunakan strcpy()
    strcpy(prodi4, prodi2);
    printf("Prodi 4: %s\n", prodi4);
    
    
    return 0;
}