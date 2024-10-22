#include<stdio.h>
#include<string.h>

int main() {
    // int number;

    // printf("Masukan angka: ");
    // scanf("%d", &number);

    // while (number >= 0) 
    // {
    //     printf("Anda memasukan angka: %d\n", number);
        
    //     printf("Masukan angka: ");
    //     scanf("%d", &number);
    // }

    // printf("Program berhenti karena input kurang dari 0\n");

    int userPin;
    int percobaan = 0;

    printf("Masukan PIN anda (4 digit): ");

    while (percobaan <= 3) {
        scanf("%d", &userPin);

        if (userPin == 1234) {
            printf("PIN anda benar. Akses diberikan\n");
            // printf("percobaan ke-%d\n", percobaan);
            return 0;
        } else {
            percobaan++;
            printf("Maaf, PIN anda salah. Anda telah mencoba sebanyak %dx\n", percobaan);
            if (percobaan <= 3) {
                printf("Coba lagi: ");
            }
        }
    }
    printf("PIN anda telah diblok\n");
    
    return 0;
}