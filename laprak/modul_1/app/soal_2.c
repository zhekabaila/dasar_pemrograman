#include <stdio.h>

int main() {
	int umur, tahunLahir, tahunSekarang = 2024;
    
	printf("Input: \n");
    
	printf("Masukkan Tahun Lahir: ");
	scanf("%d", &tahunLahir);
	getchar();
    
	umur = tahunSekarang - tahunLahir;
    
	printf("\nOutput : \n");
    
	printf("Umur Anda : %d tahun\n", umur);

	return 0;
}
