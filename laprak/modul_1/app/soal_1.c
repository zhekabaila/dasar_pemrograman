#include <stdio.h>
#include <string.h>

int main()
{
	char nim[20], nama[255], kelas;

	printf("Input: \n");
	printf("Masukkan NIM 	: ");
	scanf("%s", nim);
	getchar();

	printf("Masukkan Nama 	: ");
	fgets(nama, sizeof(nama), stdin);
    
	printf("Masukkan Kelas 	: ");
	scanf("%c", &kelas);
	getchar();

	printf("\nOutput: \n");

	printf("NIM 		: %s \n", nim);
	printf("Nama 		: %s", nama);
	printf("Kelas 		: %c\n", kelas);

	return 0;
}
