#include<stdio.h>

int num = 20;

int isEven() {
    if (num == 0) return 0;
    
    return num % 2 == 0;
}

void main() {
    if (isEven()) {
        printf("%d adalah bilangan genap\n", num);
    } else {
        printf("%d adalah bilangan ganjil\n", num);
    }
}