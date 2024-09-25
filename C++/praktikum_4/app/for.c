#include<stdio.h>
#include<string.h>

int main() {
    char name;

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("Hello World %d\n", i);
    // }

    // int sum = 0;

    // for (int i = 1; i <= 10; i++)
    // {
    //     sum += i;
    // }

    // printf("Jumlah dari 1 hingga 10 adalah: %d\n", sum);

    //! SOAL 1 
    // int angka;

    // printf("masukan angka: ");
    // scanf("%d", &angka);

    // for (int i = 1; i <= angka; i++)
    // {
    //     printf("%d x %d = %d\n", angka, i, angka * i);
    // }


    // printf("masukan batas persegi panjang: ");
    // scanf("%d", &batas);
    
    int batas = 5;

    for (int i = 1; i <= batas; i++)
    {
        for (int j = batas; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    
    return 0;
}