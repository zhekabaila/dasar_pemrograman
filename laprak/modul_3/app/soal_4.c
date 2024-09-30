#include <stdio.h>
#include <string.h>

int main()
{
    int percobaan = 1, inputPin, pin = 5555, pilihan;
    int saldo = 1000000;
    char konfirmasi;

    printf("\n=====================================\n");
    printf("|    Selamat Datang di ATM Zheka    |");
    printf("\n=====================================\n");

    while (percobaan <= 3)
    {
        printf("\nSilahkan masukan PIN anda > ");
        scanf("%d", &inputPin);
        getchar();

        if (inputPin == pin) {
            printf("\n=============================================\n");
            printf("|    Selamat datang, anda berhasil masuk    |");
            printf("\n=============================================\n");

            do {
                printf("\n========= Silahkan pilih menu ==========\n");
                printf("| [1] Cek Saldo                        |\n");
                printf("| [2] Tarik Tunai                      |\n");
                printf("| [0] Keluar                           |\n");
                printf("======================================== \n");
                printf("Pilih menu > ");
                scanf("%d", &pilihan);
                getchar();
                
                switch (pilihan) {
                    case 1:
                        printf("\n\n-----------------------------------------\n\n");
                        printf("Saldo yang anda miliki sebesar: Rp. %d", saldo);
                        printf("\n\n-----------------------------------------\n\n");

                        printf("Apakah anda akan melanjutkan transaksi? (y/n) > ");
                        scanf("%c", &konfirmasi);
                        getchar();

                        if (konfirmasi == 'n') {
                            printf("\n\n-----------------------------------------\n\n");
                            printf("Terimakasih, sampai bertemu kembali.");
                            printf("\n\n-----------------------------------------\n\n");
                            return 0;
                        }
                        
                        break;
                    case 2:
                        int jumlahSaldoTarik;
                        printf("\n\n-----------------------------------------\n\n");
                        printf("Masukan jumlah yang ingin anda tarik > Rp. ");
                        scanf("%d", &jumlahSaldoTarik);
                        getchar();

                        if (jumlahSaldoTarik > saldo) {
                            printf("Saldo anda tidak mencukupi. Silahkan coba lagi.");
                        } else {
                            saldo -= jumlahSaldoTarik;
                            printf("Jumlah saldo anda sekarang adalah > Rp. %d", saldo);
                        }
                        printf("\n\n-----------------------------------------\n\n");

                        printf("Apakah anda akan melanjutkan transaksi? (y/n) > ");
                        scanf("%c", &konfirmasi);
                        getchar();

                        if (konfirmasi == 'n') {
                            printf("\n\n-----------------------------------------\n\n");
                            printf("Terimakasih, sampai bertemu kembali.");
                            printf("\n\n-----------------------------------------\n\n");
                            return 0;
                        }

                        break;
                    case 0:
                        printf("\n\n-----------------------------------------\n\n");
                        printf("Terimakasih, sampai bertemu kembali.");
                        printf("\n\n-----------------------------------------\n\n");
                        return 0;
                    default:
                        printf("\n\n-----------------------------------------\n\n");
                        printf("Input tidak valid.");
                        printf("\n\n-----------------------------------------\n\n");
                }
            } while (pilihan != 0);
            
            return 0;
        }
        
        printf("PIN yang anda masukan salah. Silahkan coba lagi.\n\n");

        if (percobaan >= 3) {
            printf("PIN anda telah diblokir.\n");
        }

        percobaan++;
    }
    
    return 0;
}