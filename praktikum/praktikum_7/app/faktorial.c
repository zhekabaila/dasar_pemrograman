#include <stdio.h>

int faktorial(int n) {
    if (n <= 0) {
        return 1;
    }

    return n * faktorial(n - 1);
}

int main() {
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Faktorial : %d\n", faktorial(n));
    
    return 0;
}