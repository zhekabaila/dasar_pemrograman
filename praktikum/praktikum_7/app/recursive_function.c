#include <stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf("Fibonacci ke-%d adalah: %d\n", n, fibonacci(n));
    
    return 0;
}