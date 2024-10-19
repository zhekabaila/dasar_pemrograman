#include<stdio.h>
#include<string.h>

typedef struct {
    int waktuBekerja;
    long gaji;
    char alamat[200];
} RincianPegawai;

typedef struct {
    char nama[100];
    char jabatan[100];
    char status[100];
    RincianPegawai rincianPegawai;
} Pegawai;

int main() {
    Pegawai pegawai[4];
    
    for (int i = 0; i < 4; i++)
    {
        printf("Silahkan isi data pegawai ke-%d \n", i+1);
        printf("Masukan Nama: ");
        fgets(pegawai[i].nama, sizeof(pegawai[i].nama), stdin);
        pegawai[i].nama[strlen(pegawai[i].nama) - 1] = '\0';

        printf("Masukan Jabatan: ");
        fgets(pegawai[i].jabatan, sizeof(pegawai[i].jabatan), stdin);
        pegawai[i].jabatan[strlen(pegawai[i].jabatan) - 1] = '\0';

        printf("Masukan Status (kontrak/karyawan): ");
        fgets(pegawai[i].status, sizeof(pegawai[i].status), stdin);
        pegawai[i].status[strlen(pegawai[i].status) - 1] = '\0';

        printf("Masukan Lama Waktu Bekerja (dalam tahun): ");
        scanf("%d", &pegawai[i].rincianPegawai.waktuBekerja);
        getchar();

        printf("Masukan Gaji: ");
        scanf("%ld", &pegawai[i].rincianPegawai.gaji);
        getchar();

        printf("Masukan Alamat: ");
        fgets(pegawai[i].rincianPegawai.alamat, sizeof(pegawai[i].rincianPegawai.alamat), stdin);
        pegawai[i].rincianPegawai.alamat[strlen(pegawai[i].rincianPegawai.alamat) - 1] = '\0';

        printf("\n");
    }
    
    
    for (int i = 0; i < 4; i++)
    {
        printf("Data pegawai ke-%d \n", i+1);
        printf("Nama            : %s\n", pegawai[i].nama);
        printf("Jabatan         : %s\n", pegawai[i].jabatan);
        printf("Status          : %s\n", pegawai[i].status);
        printf("Lama Bekerja    : %d tahun\n", pegawai[i].rincianPegawai.waktuBekerja);
        printf("Gaji            : Rp.%ld\n", pegawai[i].rincianPegawai.gaji);
        printf("Alamat          : %s\n", pegawai[i].rincianPegawai.alamat);
        printf("\n");
    }
    
    return 0;
}