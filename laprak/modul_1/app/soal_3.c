#include <stdio.h>

int main() {
	int X = 10;
	int Y = 7;
	int Z = 2*X - Y;
    
	int Hasil = Z - Y * X;

	printf("X = %d \n", X);
	printf("Y = %d \n", Y);
	printf("Z = 2 * %d - %d = %d \n", X, Y, Z);
	printf("Hasil = %d - %d * %d = %d\n", Z, Y, X, Hasil);

	return 0;
}
