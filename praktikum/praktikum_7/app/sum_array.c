#include<stdio.h>

int sumArray(int array[], int size) {
    if (size == 0) {
        return 0;
    }

    return array[size - 1] + sumArray(array, size - 1);
}

void main() {
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sizeArray = sizeof(num) / sizeof(num[0]);

    int result = sumArray(num, sizeArray);

    printf("Hasil penjumlahan array di atas adalah: %d\n", result);
}