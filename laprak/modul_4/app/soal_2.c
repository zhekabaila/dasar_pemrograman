#include <stdio.h>
int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    
    angka[2 - 1] = 25;
    angka[4 - 1] = 45;

    printf("\n[");
    for (int i = 0; i < 5; i++) {
        printf("%d", angka[i]);
        if (i < 4) {
            printf(", ");
        }
    }
    printf("]\n\n");
    
    return 0;
}