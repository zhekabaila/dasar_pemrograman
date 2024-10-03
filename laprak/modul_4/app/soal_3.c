#include <stdio.h>
int main() {
	int hasil, angka[3][3] = {
    	{1, 2, 3},
    	{4, 5, 6},
    	{7, 8, 9},
	};
	
	int panjangDimensiPertama = sizeof(angka) / sizeof(angka[0]);
	int panjangDimensiKedua = sizeof(angka[0]) / sizeof(angka[0][0]);
    
	printf("\n{\n");
	for (int i = 0; i < panjangDimensiPertama; i++) {
    	printf("	{");
    	for (int j = 0; j < panjangDimensiKedua; j++) {
        	hasil += angka[i][j];
        	printf("%d", angka[i][j]);
        	if (j < 2) {
            	printf(", ");
        	}
    	}
    	printf("},");
    	printf("\n");
	}
	printf("}\n");

	printf("\nHasil dari penjumlahan array 3x3 di atas adalah %d\n\n", hasil);
    
	return 0;
}
