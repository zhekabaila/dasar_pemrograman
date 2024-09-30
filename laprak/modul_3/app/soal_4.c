#include <stdio.h>
#include <string.h>

int main()
{
    int percobaan = 1, inputPin, pin = 5555, pilihan;
    long saldo = 1000000;

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
                printf("| [3] Transfer                         |\n");
                printf("| [0] Keluar                           |\n");
                printf("======================================== \n");
                printf("Pilih menu > ");
                scanf("%d", &pilihan);
                getchar();
                
                switch (pilihan) {
                    case 1:
                        printf("\n-----------------------------------------\n");
                        printf("Saldo yang anda miliki sebesar: Rp. %ld", saldo);
                        printf("\n-----------------------------------------\n");
                        break;
                    case 2:
                        long jumlahSaldoTarik;
                        printf("\n-----------------------------------------\n");
                        printf("Masukan jumlah yang ingin anda tarik > Rp. ");
                        scanf("%ld", &jumlahSaldoTarik);
                        getchar();

                        if (jumlahSaldoTarik > saldo) {
                            printf("Saldo anda tidak mencukupi. Silahkan coba lagi.");
                        } else {
                            saldo -= jumlahSaldoTarik;
                            printf("Sisa saldo anda sekarang sebesar Rp. %ld", saldo);
                        }
                        printf("\n-----------------------------------------\n");
                        break;
                    case 3:
                        long rekeningTujuan, jumlahTransfer;

                        printf("\n-----------------------------------------\n");
                        printf("Masukan rekening tujuan anda > ");
                        scanf("%ld", &rekeningTujuan);
                        getchar();

                        printf("Masukan jumlah yang ingin anda kirim > Rp. ");
                        scanf("%ld", &jumlahTransfer);
                        getchar();

                        if (jumlahTransfer > saldo) {
                            printf("\nSaldo anda tidak mencukupi. Silahkan coba lagi.");
                        } else {
                            saldo -= jumlahTransfer;
                            printf("\nSaldo sebesar Rp. %ld telah berhasil dikirim ke rekening %ld\n", jumlahTransfer, rekeningTujuan);
                            printf("Sisa saldo anda sekarang sebesar Rp. %ld", saldo);
                        }

                        printf("\n-----------------------------------------\n");
                        break;
                    case 0:
                        printf("\n-----------------------------------------\n");
                        printf("Terimakasih, sampai bertemu kembali.");
                        printf("\n-----------------------------------------\n");
                        return 0;
                    default:
                        printf("\n-----------------------------------------\n");
                        printf("Masukan tidak valid.");
                        printf("\n-----------------------------------------\n");
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