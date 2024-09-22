#include <stdio.h>
#include <string.h>
    
int main()
{
        int nilai, uts, uas, praktik, absen;
        char grade, nim[16], nama[30];
        
        printf("Masukan NIM             : ");
        scanf("%s", nim);
        getchar();
        
        printf("Masukan Nama            : ");
        fgets(nama, sizeof(nama), stdin);
        
        printf("Masukan nilai UTS       : ");
        scanf("%d", &uts);
        getchar();
        
        printf("Masukan nilai UAS       : ");
        scanf("%d", &uas);
        getchar();
        
        printf("Masukan nilai Praktik   : ");
        scanf("%d", &praktik);
        getchar();
        
        printf("Masukan nilai Absen     : ");
        scanf("%d", &absen);
        getchar();
        
        nilai = uts * 0.35 + uas * 0.30 + praktik * 0.20 + absen * 0.15;
        
        if (nilai < 45) {
            grade = 'E';
        } else {
            switch (nilai) {
                case 85 ... 100:
                    grade = 'A';
                break;
                
                case 70 ... 84:
                    grade = 'B';
                break;
                
                case 60 ... 69:
                    grade = 'C';
                break;
                
                case 45 ... 59:
                    grade = 'D';
                break;
                
                default :
                    grade = '-';
            }   
        }
        
        
        printf("\n=========== PENENTUAN NILAI AKHIR ===========\n");
        printf("NIM                 : %s \n", nim);
        printf("NAMA                : %s", nama);
        printf("NILAI UAS           : %d \n", uas);
        printf("NILAI UTS           : %d \n", uts);
        printf("NILAI PRAKTEK       : %d \n", praktik);
        printf("NILAI PRESENSI      : %d \n", absen);
        printf("NILAI AKHIR ANGKA YANG DIDAPATKAN %d \n", nilai);
        printf("NILAI AKHIR HURUF YANG DIDAPATKAN %c \n", grade);
        printf("=============================================\n");
    
        return 0;
}
