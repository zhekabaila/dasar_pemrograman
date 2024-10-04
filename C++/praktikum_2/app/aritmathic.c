#include <stdio.h>

int main() {
    int x = 10, y = 2;
    
    y *= x;
    y++;
    x--;

    x %= ((1 || 3) + 1);
    y %= x + y;
    y = !y;

    printf("x = %d, y = %d\n", x, y); 

    return 0;
}